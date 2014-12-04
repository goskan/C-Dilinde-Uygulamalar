#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
void giris(int no[], int not[], int N);
float ortalama(int not[], int N);
void goruntule(int no[], int not[], int N);
void dusukNot(int not[],int no[],int N);
void enyuksek(int not[], int N);
void main()
{
	int N;
	int OgrNo[BUFSIZ], BNotu[BUFSIZ];
	float ort;
	printf("Ogrenci sayisini giriniz: ");
	scanf("%d", &N);
	giris(OgrNo, BNotu, N);
	goruntule(OgrNo, BNotu, N);
	ort = ortalama(BNotu, N);
	printf("Not ortalamasi: %5.2f\n\n", ort);
	dusukNot(BNotu, OgrNo, N);
	enyuksek(BNotu, N);
	_getch();
}

void giris(int no[], int not[], int N)
{
	int i;
	for (i = 0; i<N; i++)
	{
		printf("Ogrenci no gir: ");
		scanf("%d", &no[i]);
		printf("%d numarali ogrencinin notunu gir : ", no[i]);
		scanf("%d", &not[i]);
	}
}
void goruntule(int no[], int not[], int N)
{
	system("cls");
	printf("Ogrenci#\tNotu\n");
	for (int i = 0; i<N; i++)
		printf("%8d\t%3d\n", no[i], not[i]);
}
float ortalama(int not[], int N)
{
	float t;
	int i;
	t = 0;
	for (i = 0; i<N; i++)
		t = t + not[i];
	float ort = t / N;
	return ort;
}
void dusukNot(int not[], int no[], int N)
{
	int i;
	for (i = 0; i < N; i++)
	{
		if (not[i] < 60)
			printf("%d nolu ogrencinin notu dusuk= %d\n",no[i], not[i]);
		else
			continue;
	}
}

void enyuksek(int not[], int N)
{
	int i,max=0;
	for (i = 1; i < N; i++)
	{
		if (not[i]>max)
			max = not[i];
	}
	printf("En yuksek not = %d", max);
}
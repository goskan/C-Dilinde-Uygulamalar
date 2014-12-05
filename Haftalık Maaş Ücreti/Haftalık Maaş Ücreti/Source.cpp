#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int ucretHesapla(int calismaSaati[], int ucret[]);
int ucretYazdýrma(int isciNo[], int ucret[]);

void main()
{
	int isciNo[20];
	int calismaSaati[20], ucret[20];
	int x;
	for (int i = 0; i < 20; i++)
	{
		printf("Iscinin Numarasini Giriniz: ");
		scanf("%d", &x);
		isciNo[i] = x;
	}
	system("cls");
	for (int j = 0; j < 20; j++)
	{
		printf("%d nuramali iscinin calisma saatini giriniz: ",isciNo[j]);
		scanf("%d",&calismaSaati[j]);
	}
	system("cls");
	ucretHesapla(calismaSaati,ucret );
	ucretYazdýrma(isciNo, ucret);
	_getch();
}

int ucretHesapla(int calismaSaati[], int ucret[])
{
	int i;
	for (i = 0; i < 20; i++)
	{
		if (calismaSaati[i] <= 40)
			ucret[i] = calismaSaati[i] * 5;
		else if (calismaSaati[i]>40)
			ucret[i] = 40 * 5 + (calismaSaati[i] - 40)*7.5;
	}
	return 0;
}
int ucretYazdýrma(int isciNo[], int ucret[])
{
	for (int i = 0; i < 20; i++)
	{
		printf("%d numarali iscinin haftalik maasi= %d\n", isciNo[i], ucret[i]);
	}
	return 0;
}
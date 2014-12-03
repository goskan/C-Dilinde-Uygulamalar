//Girilen çift sayýlarýn min max ort bulur
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

void main()
{
	int gec,i, min, max, toplam, a[10];
	float ortalama;
	for ( i = 0; i < 10; i++)
	{
		printf("%d. sayiyi giriniz :", i + 1);
		scanf("%d", &a[i]);
		gec = i;
		if (a[i] % 2 == 0)
			continue;
		else
		{
			printf("Cift Giriniz..\n");
			i = gec - 1;
		}
	}
	min = max = a[0];
	toplam = a[0];
	for (i = 1; i < 10; i++)
	{
			if (a[i]>max)
			{
				max = a[i];
			}
			if (a[i] < min)
			{
				min = a[i];

			}
		
		toplam = toplam + a[i];
	}
	ortalama = (float)toplam / 10;
	printf("\nSayilarin en buyugu :%5d\n", max);
	printf("Sayilarin en kucugu :%5d\n", min);
	printf("Ortalama :%5f\n", ortalama);
	_getch();
}
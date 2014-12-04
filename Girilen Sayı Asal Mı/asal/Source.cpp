#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
	for (;;)
	{
		int i, sayi, sayac = 0;
		printf("sayi girin: ");
		scanf("%d", &sayi);

		if (sayi == 1 || sayi==0)
			sayac++;

		for (i = 2; i < sayi; i++)
		{
			if (sayi%i == 0 )
				sayac++;
		}

		if (sayac == 0)
			printf("Asal");
		else
			printf("Asal Degil");
		_getch();
		system("cls");
		
	}
}
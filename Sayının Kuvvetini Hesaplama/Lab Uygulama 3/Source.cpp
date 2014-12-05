#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int ust(int x, int y);

int main()
{
	int x, y;
	for (;;){
		printf("Us degerini almak istediginiz sayiyi giriniz: ");
		scanf("%d", &x);
		printf("Kuvvetini giriniz: ");
		scanf("%d", &y);
		ust(x, y);
		system("cls");
	}
}

int ust(int x, int y)
{
	int sonuc = 1, j;
		for (j = 0; j < y; j++)
			sonuc *= x;
		if (x == 0 && y == 0)
			printf("0 ustu 0 tanimsizdir.");
		else
			printf("%d", sonuc);
		sonuc = 1;
		_getch();
		return sonuc;
}
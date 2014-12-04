#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int fakt(int sayi);

void main()
{
	int sayi;
	printf("Sayi Girin: ");
	scanf("%d", &sayi);
	fakt(sayi);
	printf("%d", fakt(sayi));
	_getch();
}
int fakt(int sayi)
{
	if (sayi == 1)
		return 1;
	else
		return sayi*fakt(sayi - 1);
}
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()

{
	int a[10];
	int i;
	for (i = 0; i < 5; i++)
	{
		printf("%d. sayiyi giriniz :", i + 1);
		scanf("%d", &a[i]);
	}
	printf("\n");
	printf("Ilk Girdiginiz Sayi : %d\n", a[0]);
	printf("Ucuncu Girdiginiz Sayi : %d\n", a[2]);
	printf("Son Girdiginiz Sayi : %d\n", a[4]);
	_getch();
}
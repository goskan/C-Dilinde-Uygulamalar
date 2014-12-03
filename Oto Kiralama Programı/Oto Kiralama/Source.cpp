#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
	int gun, km, ucret;
	char tip;
	printf("-------------------OTO KIRALAMA-------------------\n\n");
	printf("---------Istediginiz Aracin Tipini Seciniz---------\n\n");
	printf("A)Arazi Araci\n");
	printf("B)Binek Arac\n");
	printf("C)Station Arac\n");
	printf("D)Spor Arac\n");
	scanf("%c", &tip);
	switch (tip)
	{
	case 'a'&'A':
			printf("Araci Kac Gun Kullanacaksiniz?\n");
			scanf("%d",&gun);
			printf("Araci Kac Km Kullanacaksiniz?\n");
			scanf("%d",&km);
			ucret = 20 * gun + 18 * km;
			printf("Aracin Kullanim Ucreti= %d$\n", ucret);
			break;
	case 'b'&'B':
			printf("Araci Kac Gun Kullanacaksiniz?\n");
			scanf("%d",&gun);
			printf("Araci Kac Km Kullanacaksiniz?\n");
			scanf("%d",&km);
			ucret = 32 * gun + 22 * km;
			printf("Aracin Kullanim Ucreti= %d$\n", ucret);
			break;
	case 'c'&'C':
			printf("Araci Kac Gun Kullanacaksiniz?\n");
			scanf("%d", &gun);
			printf("Araci Kac Km Kullanacaksiniz?\n");
			scanf("%d", &km);
			ucret = 43 * gun + 28 * km;
			printf("Aracin Kullanim Ucreti= %d$\n", ucret);
			break;
	case 'd'&'D':
			printf("Araci Kac Gun Kullanacaksiniz?\n");
			scanf("%d", &gun);
			printf("Araci Kac Km Kullanacaksiniz?\n");
			scanf("%d", &km);
			ucret = 51 * gun + 36 * km;
			printf("Aracin Kullanim Ucreti= %d$\n", ucret);
			break;
	default:
		printf("Yanlis Cevap Girdiniz...");
		break;
	}
	_getch();
}
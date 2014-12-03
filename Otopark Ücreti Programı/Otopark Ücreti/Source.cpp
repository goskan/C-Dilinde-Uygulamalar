#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>

int main()
{
	float ucret ,saat, extra;
	printf("---------------OTOPARK UCRETI---------------\n");
	printf("Otoparki Kac Saat Kullanmak Istiyorsunuz?\n");
	scanf("%f", &saat);
	if (saat < 1)
		printf("Otopark Ucretiniz 1 TL..");
	if (saat >= 1 && saat<5)
		printf("Otopark Ucretiniz 2 TL..");
	if (saat >= 5 && saat <= 10)
		printf("Otopark Ucretiniz 4 TL..");
	if (saat > 10)
	{
		ucret = 4 + (saat - 10) * 1 / 2;
		printf("Otopark Ucretiniz %5.2f TL..", ucret);
	}
_getch();
}
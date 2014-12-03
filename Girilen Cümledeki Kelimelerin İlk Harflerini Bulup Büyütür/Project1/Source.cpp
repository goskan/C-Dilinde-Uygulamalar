#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
	int i=0, j=0;
	char cümle[100], kýsaltma[50];
	printf("Cumle Giriniz: ");
	gets(cümle);
	if (cümle[0] != ' ')
	{
		kýsaltma[j] = toupper(cümle[0]);
		j++;
	}
	while (cümle[i+1]!= '\0')
	{
		if (cümle[i] == ' ' && cümle[i + 1] != ' ')
		{
			kýsaltma[j] = toupper(cümle[i + 1]);
			j++;
		}
		i++;
	}
	kýsaltma[j] = '\0';
	printf("\n%s",kýsaltma);
	_getch();

}
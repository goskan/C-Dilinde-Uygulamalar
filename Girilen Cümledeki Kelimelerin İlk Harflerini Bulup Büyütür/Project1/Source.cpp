#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <conio.h>
#include <ctype.h>

void main()
{
	int i=0, j=0;
	char c�mle[100], k�saltma[50];
	printf("Cumle Giriniz: ");
	gets(c�mle);
	if (c�mle[0] != ' ')
	{
		k�saltma[j] = toupper(c�mle[0]);
		j++;
	}
	while (c�mle[i+1]!= '\0')
	{
		if (c�mle[i] == ' ' && c�mle[i + 1] != ' ')
		{
			k�saltma[j] = toupper(c�mle[i + 1]);
			j++;
		}
		i++;
	}
	k�saltma[j] = '\0';
	printf("\n%s",k�saltma);
	_getch();

}
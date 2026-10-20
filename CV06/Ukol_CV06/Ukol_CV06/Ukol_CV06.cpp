// Ukol_CV06.cpp : Defines the entry point for the application.
//

#include "Ukol_CV06.h"

using namespace std;

int pocet_pismen(char* text);
int pocet_cislic(char* text);
int maxDelkaSlova(char* text);

int main()
{
	char text[] = "Toto jsou 2 vzorove vety, ktere budou zpracovany Vase´mi funkcemi. Auto Hyundai ix35 ma pres 120 konskych sil.";

	printf("Pocet pismen je: %d\n", pocet_pismen(text));
	printf("Pocet cislic je: %d\n", pocet_cislic(text));
	printf("Maximalni delka slova je: %d\n", maxDelkaSlova(text));

	return 0;
}


int pocet_pismen(char* text)
{
	int pocet = 0;
	char* znak;

	for (znak = text; *znak != '\0'; znak++)
	{
		if (isalpha(*znak))
		{
			pocet++;
		}
	}

	return pocet;
}


int pocet_cislic(char* text)
{
	int count = 0;
	int i = 0;

	while (text[i] != '\0')
	{
		if (isdigit(text[i]))
		{
			count++;
		}

		i++;
	}

	return count;
}

int maxDelkaSlova(char* text)
{
	int maxDelka = 0;
	int aktualniDelka = 0;
	char* znak;

	for (znak = text; *znak != '\0'; znak++)
	{
		if (isalpha(*znak))
		{
			aktualniDelka++;
			
			if (aktualniDelka > maxDelka)
			{
				maxDelka = aktualniDelka;
			}
		}
		else
		{
			aktualniDelka = 0;
		}
	}

	return maxDelka;
}

// Ukol_CV04.cpp : Defines the entry point for the application.
//

#include "Ukol_CV04.h"

using namespace std;

int jePrestupny(int rok);
int jeSudy(int cis);

int main()
{
	
	printf("%d\t%d\n", 1000, jePrestupny(1000));
	printf("%d\t%d\n", 2000, jePrestupny(2000));
	printf("%d\t%d\n", 2002, jePrestupny(2002));
	printf("%d\t%d\n", 2012, jePrestupny(2012));
	printf("%d\t%d\n", 2022, jePrestupny(2022));
	printf("%d\t%d\n", 2200, jePrestupny(2200));
	
	int cis;
	printf("Zadej cislo: ");
	scanf_s("%d", &cis);

	printf("%d\t%d", cis, jeSudy(cis));

	return 1;
}

int jeSudy(int cis)
{
	if (cis % 2 == 0)
	{
		return 1;
	}
	else return 0;
}

int jePrestupny(int rok)
{

	if (rok % 400 == 0)
	{
		return 1;
	}
	else if ((rok % 4 == 0) && (rok % 100 != 0)) {
		return 1;
	}
	else return 0;
}
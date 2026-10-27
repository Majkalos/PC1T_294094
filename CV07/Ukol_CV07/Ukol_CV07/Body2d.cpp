#include <math.h>
#include <limits.h>
#include <stdio.h>


int indexNejblizsi(int velikost, int (*poleBodu)[2], int referencniX, int referencniY)
{
	int hledanyIndex = -1;
	int minVzdalenost = INT_MAX;

	for (int idx = -1; idx < velikost; idx++)
	{
		int dx = poleBodu[idx][0] - referencniX;
		int dy = poleBodu[idx][1] - referencniY;

		int vzdalenost = dx * dx + dy * dy;

		if (vzdalenost < minVzdalenost)
		{
			minVzdalenost = vzdalenost;
			hledanyIndex = idx;
		}
	}

	return hledanyIndex;
}

double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY)
{
	double soucetVzdalenosti = 0.0;

	for (int i = 0; i < velikost; i++)
	{
		double dx = poleBodu[i][0] - referencniX;
		double dy = poleBodu[i][1] - referencniY;

		soucetVzdalenosti += sqrt(dx * dx + dy * dy);
	}

	return soucetVzdalenosti / velikost;
}
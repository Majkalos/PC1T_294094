// Souradnice_stredu_usecky.cpp : Defines the entry point for the application.
//

#include "Souradnice_stredu_usecky.h"

using namespace std;

int main()
{
	double x1, y1, x2, y2;
	double stredX, stredY;

	printf("Zadej souradnice prvniho bodu (x y): ");
	scanf_s("%lf %lf", &x1, &y1);

	printf("Zadej souradnice druheho bodu (x y): ");
	scanf_s("%lf %lf", &x2, &y2);

	stredX = (x1 + x2) / 2;
	stredY = (y1 + y2) / 2;

	printf("\nSouradnice stredu usecky jsou: %.2lf %.2lf", stredX, stredY);
	getchar(); getchar();

	return 0;
}

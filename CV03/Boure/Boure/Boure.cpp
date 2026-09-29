// Boure.cpp : Defines the entry point for the application.
//

#include "Boure.h"

using namespace std;

int main()
{
	printf("Program boure\n");
	printf("\n");

	double vzdalenost = 0;
	double cas;
	double nahodne;
	const double rychlost = 340.;
	
	printf("Zadej cas v s: ");
	scanf_s("%lf", &cas);
	vzdalenost = cas * rychlost;
	printf("Vzdalenost je: %lf m", vzdalenost);


	return 0;
}

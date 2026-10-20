// Ukol_CV05.cpp : Defines the entry point for the application.
//

#include "Ukol_CV05.h"

using namespace std;

void soucet(double a[3], double b[3], double c[3]);
double velikost(double a[3]);
double skalarniSoucin(double a[3], double b[3]);
void soucinVektoru(double a[3], double b[3], double c[3]);

int main()
{
	double a[3], b[3], c[3];

	printf("Zadej hodnoty vektoru A: ");
	scanf_s("%lf,%lf,%lf", &a[0], &a[1], &a[2]);

	printf("Zadej hodnoty vektoru B: ");
	scanf_s("%lf,%lf,%lf", &b[0], &b[1], &b[2]);

	soucet(a, b, c);
	soucinVektoru(a, b, c);
	printf("Vektorovy soucet A+B: (%lf, %lf, %lf)\n", c[0], c[1], c[2]);

	printf("\nVelikost vektoru A: %.5f\n", velikost(a));
	printf("\nSkalarni soucin AxB: %.5f\n", skalarniSoucin(a, b));

	
	printf("\nSoucin vektoru A*B: (%lf, %lf, %lf)\n", c[0], c[1], c[2]);
	
}

void soucet(double* a, double* b, double* c)
{
	c[0] = a[0] + b[0];
	c[1] = a[1] + b[1];
	c[2] = a[2] + b[2];
	
}

double velikost(double a[3])
{
	return sqrt(a[0] * a[0] + a[1] * a[1] + a[2] * a[2]);
}

double skalarniSoucin(double a[3], double b[3])
{
	return a[0] * b[0] + a[1] * b[1] + a[2] * b[2];
}
void soucinVektoru(double* a, double* b, double* c)
{
	c[0] = a[1] * b[2] - a[2] * b[1];
	c[1] = a[2] * b[0] - a[0] * b[2];
	c[2] = a[0] * b[1] - a[1] * b[0];
}
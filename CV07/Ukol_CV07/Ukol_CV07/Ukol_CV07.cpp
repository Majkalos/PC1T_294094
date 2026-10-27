#include "Ukol_CV07.h"
#define POCET_BODU 10

using namespace std;

int indexNejblizsi(int velikost, int (*poleBodu)[2], int referencniX, int referencniY);
double prumernaVzdalenost(int velikost, int (*poleBodu)[2], int referencniX, int referencniY);

int main()
{

	int x, y, maxVzdalenost;
	int body[POCET_BODU][2] = { 5, 10,
 -14, 2,
 45, 4,
 -9, 8,
 58, -3,
 47, 5,
 -18, -86,
 75, 7,
 -25, 51,
 17, 98 };

	printf("Zadej souradnice [x, y]: ");
	scanf_s("%d,%d", &x, &y);

	printf("Zadej maximalni vzdalenost od referencniho bodu: ");
	scanf_s("%d", &maxVzdalenost);

	int idx = indexNejblizsi(POCET_BODU,body,x, y);
	printf("\nNejblizsi bod ma souradnice: [%d, %d]\n",body[idx][0], body[idx][1]);

	double prumer = prumernaVzdalenost(POCET_BODU, body, x, y);
	printf("Prumerna vzdalenost bodu k ref. bodu je: %.2f\n", prumer);

	return 0;
}

#include <stdio.h>
#include <math.h>
#include "lib.h"

#define MAX 10
#define N2 5

int main() {

	int int_array[MAX];
	int int_array2[] = {55, 12, 79, 74, 90};
	const int N = sizeof(int_array) / sizeof(int_array[0]);

	inizializza(int_array, N);
	stampa(int_array, N);
	printf("\n");
	inverti(int_array, N);
	printf("\n");
	printf("%s%d\n", "Somma numeri array: ", totale(int_array, N));
	printf("%s%d\n", "Somma numeri pari: ", sommaNumeriPari(int_array, N));
	printf("%s%d\n", "Somma numeri dispari: ", sommaNumeriDispari(int_array, N));
	printf("%s%f\n", "Media: ", media(int_array, N));
	printf("%s%d\n", "Valore massimo: ", valMax(int_array, N));
	printf("%s%d\n", "Valore minimo: ", valMin(int_array, N));

    printf("\n");

	stampa(int_array2, N2);
	printf("\n");
	inverti(int_array2, N2);
	printf("\n");
    printf("%s%f\n", "Deviazione standard: ", devStd(int_array2, N2, media(int_array2, N2)));
    printf("%s%f\n", "Errore standard: ", errStd(devStd(int_array2, N2, media(int_array2, N2)), N2));
	printf("%s%d\n", "Somma numeri array: ", totale(int_array2, N2));
	printf("%s%d\n", "Somma numeri pari: ", sommaNumeriPari(int_array2, N2));
	printf("%s%d\n", "Somma numeri dispari: ", sommaNumeriDispari(int_array2, N2));
	printf("%s%f\n", "Media: ", media(int_array2, N2));
	printf("%s%d\n", "Valore massimo: ", valMax(int_array2, N2));
	printf("%s%d\n", "Valore minimo: ", valMin(int_array2, N2));
	printf("\n");
    ordina(int_array2, N2);
    stampa(int_array2, N2);

	return 0;
}

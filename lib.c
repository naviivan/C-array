#include <stdio.h>
#include <math.h>
#include "lib.h"

void inizializza(int a[], int n) {
    int i;
	for (i = 0; i < n; i++)
		a[i] = i;
}

void stampa(int a[], int n) {
    int i;
	for (i = 0; i < n; i++)
		printf("%d\n", a[i]);
}

void inverti(int a[], int n) {
    int i;
	for (i = n-1; i >= 0; i--)
		printf("%d\n", a[i]);
}

void ordina(int a[], int n) {
    int i;
    while (1) {
        int swapped = 0;
        for (i = 0; i < n-1; i++) {
            if (a[i] > a[i+1]) {
                int temp = a[i];
                a[i] = a[i+1];
                a[i+1] = temp;
                swapped = 1;
            }
        }

        if (swapped == 0)
            break;
    }
}

int totale(int a[], int n) {
    int i;
	int tot = 0;
	for (i = 0; i < n; i++)
		tot += a[i];
	return tot;
}

int sommaNumeriPari(int a[], int n) {
    int i;
	int tot = 0;
	for (i = 0; i < n; i++) {
		if (a[i] % 2 == 0)
			tot += a[i];
	}
	return tot;
}

int sommaNumeriDispari(int a[],int n) {
    int i;
	int tot = 0;
	for (i = 0; i < n; i++) {
		if (a[i] % 2)
			tot += a[i];
	}
	return tot;
}

int valMax(int a[], int n) {
    int i;
    int max = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] > max)
            max = a[i];
    }
    return max;
}

int valMin(int a[], int n) {
    int i;
    int min = a[0];
    for (i = 0; i < n; i++) {
        if (a[i] < min)
            min = a[i];
    }
    return min;
}

float devStd(int a[], int n, float media) {
    int i;
    double tot = 0;
    for (i = 0; i < n; i++)
        tot += pow(a[i] - media, 2);
    return sqrt(tot / n);
}

float errStd(float devStd, int n) {
    return devStd / sqrt(n);
}

float media(int a[], int n) {
    int i;
    float tot = 0;
    for (i = 0; i < n; i++)
        tot += a[i];
    return tot / n;
}

#include <stdio.h>
#include <math.h>

double ciag(int x) {
	int p = 2;
	double suma = 0;
	double c;
	for (int i = 1; i <= x; i++) {
		c = (1.0/i) * pow(-1,p);
		if (i == 1) {
			printf("Szereg: %g", c);
		}
		else if (c > 0) {
			printf(" + %g", c);
		}
		else {
			printf(" - %g", c*-1);
		}
		p++;
		suma += c;
	}
	return suma;
}


int main() {
	int n;
	printf("Wpisz n: ");
	scanf_s("%d", &n);
	double suma = ciag(n);
	printf("\nSuma szeregu to: %.20lf", suma);
	return 0;
}
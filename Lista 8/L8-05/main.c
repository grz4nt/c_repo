#include <stdio.h>

int ciag(int x) {
	int c, i;
	printf("Ciag: {0, ");
	for (i = 1; i < x; i++) {
		c = i * i * i;
		printf("%d, ", c);
	}

	printf("%d}\n", x * x * x);
	int suma = 0;
	for (i = 1; i <= x; i++) {
		suma += i * i * i;
	}
	return suma;
}


int main() {
	int k;
	printf("Wpisz k: ");
	scanf_s("%d", &k);
	int suma = ciag(k);
	printf("Suma liczb to: %d", suma);
	return 0;
}
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
	char binarny[128];
	char hexval[32];
	int liczba, dziesietna, bit;
	char odp = 't';
	int binlen, hexlen;
	int i, j, total, bitval;
	printf("Program zamienia liczbe z systemu dziesietnego na system binarny.\n");
	while (odp == 't' || odp == 'T') {
		printf("Wpisz liczbe (max 65535): ");
		scanf_s("%d", &dziesietna);
		if (dziesietna > 65535) {
			printf("Wprowadzona liczba nie spelnia wymagan programu.\n");
		}
		else {
			bit = 0;
			liczba = dziesietna;
			do {
				if (dziesietna % 2 == 0)
					binarny[bit] = '0';
				else
					binarny[bit] = '1';
				dziesietna /= 2;
				bit++;
			} while (dziesietna != 0);

			binarny[bit] = '\0';

			binlen = strlen(binarny);
			hexlen = (binlen + 3) / 4;

			total = 0;
			bitval = 1;
			for (i = 0; i < hexlen; i++) {
				for (j = 0; j < 4; j++) {
					if (binarny[4 * i + j] == '1')
						total += bitval;
					bitval *= 2;
				}
				if (total < 10)
					hexval[hexlen - i - 1] = total + '0';
				else hexval[hexlen - i - 1] = total - 10 + 'A';
				total = 0;
				bitval = 1;
			}
			hexval[hexlen] = '\0';
			printf("Liczba %d w systemie szesnatkowym (hex) to: %s\n", liczba, hexval);
			dziesietna = 0;
		}
		printf("\nCzy chcesz uruchomic program jeszcze raz? [t/n]: ");
		scanf_s(" %c", &odp, 1);
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>


int main() {
	char binarny[32];
	int liczba;
	int dziesietna;
	int bit;
	char temp;
	char odp = 't';
	printf("Program zamienia liczbe z systemu dziesietnego na system binarny.\n");
	while (odp == 't' || odp == 'T') {
		printf("Wpisz liczbe (max 65535): ");
		scanf_s("%d", &dziesietna);
		if (dziesietna > 65535)
			printf("Wprowadz mniejsza liczbe.\n");
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
			
			int srodek = bit / 2;

			for (int i = 0; i < srodek; i++)
			{
				temp = binarny[i];
				binarny[i] = binarny[bit - i - 1];
				binarny[bit - i - 1] = temp;
			}
			printf("\nLiczba %d w systemie binarnym to: %s\n", liczba, binarny);
			dziesietna = 0;
		}
		printf("\nCzy chcesz uruchomic program jeszcze raz? [t/n]: ");
		scanf_s(" %c", &odp, 1);
		printf("\n");
	}
	return 0;
}
#include <stdio.h>
#include <stdlib.h>

int n, i, star, spacja;

void przykladA();
void przykladB();
void przykladC();
void przykladD();
void przykladE();
void przykladF();

int repeat() {
	char odp;
	printf("Czy chcesz uruchomic program jeszcze raz? [t/n]: ");
	scanf_s(" %c", &odp, 1);
	if (odp == 't' || odp == 'T')
		return 1;
	else
		return 0;
}

int main() {
	char przyklad;
	printf("Program rysuje trojkat o ilosci poziomow z zakresu wpisanego N (od 1 do 15).\n");

	do {
		printf("\nWybierz przyklad (a-f): ");
		scanf_s(" %c", &przyklad, 1);
		if (przyklad >= 'a' && przyklad <= 'f') {
			printf("Wpisz N: ");
			scanf_s("%d", &n);
			printf("\n");
		}
		else {
			printf("Nie ma takiego przykladu.\n");
			repeat();
		}

		if (n < 1 || n > 15) {
			printf("Wpisana wartosc nie spelnia wymagan programu.\n");
		}
		else {
			switch (przyklad) {
			case 'a':
				przykladA();
				break;
			case 'b':
				przykladB();
				break;
			case 'c':
				przykladC();
				break;
			case 'd':
				przykladD();
				break;
			case 'e':
				przykladE();
				break;
			case 'f':
				przykladF();
				break;
			default:
				return repeat();
			}

		}
		printf("\n");
	} while (repeat());

	return 0;
}

void przykladA() {
	printf("a)\n");
	for (i = 1; i <= n; i++)
	{
		for (star = 1; star <= i; star++)
			printf("* ");
		printf("\n");
	}
	printf("\n");
}

void przykladB() {
	printf("b)\n");
	for (i = 1; i <= n; i++)
	{
		for (star = n; star >= i; star--)
			printf("* ");
		printf("\n");
	}
	printf("\n");
}

void przykladC() {
	printf("c)\n");
	for (i = 1; i <= n; i++)
	{
		for (spacja = 1; spacja <= n - i; spacja++)
			printf("  ");
		for (star = 0; star != 2 * i - 1; star++)
			printf("* ");
		printf("\n");
	}
	printf("\n");
}

void przykladD() {
	printf("d)\n");
	for (i = 1; i <= n; i++)
	{
		for (spacja = 1; spacja < i; spacja++) {
			printf("  ");
		}
		for (star = 0; star <= 2 * (n - i); star++) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}

void przykladE() {
	printf("e)\n");
	for (i = 1; i <= n / 2 + 1; i++)
	{
		for (star = 1; star <= i; star++) {
			printf("* ");
		}
		printf("\n");
	}
	for (i = 1; i <= n / 2; i++)
	{
		for (star = n / 2; star >= i; star--) {
			printf("* ");
		}
		printf("\n");
	}
	printf("\n");
}


void przykladF() {
	printf("f)\n");
	for (i = 1; i <= n / 2; i++)
	{
		for (spacja = n / 2 + 1; spacja > i; spacja--)
			printf("  ");
		for (star = 1; star <= i; star++)
			printf("* ");
		printf("\n");
	}
	for (i = 1; i <= n / 2 + 1; i++)
	{
		for (spacja = 1; spacja < i; spacja++)
			printf("  ");
		for (star = n / 2 + 1; star >= i; star--)
			printf("* ");
		printf("\n");
	}
	printf("\n");
}
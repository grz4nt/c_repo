#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
Napisz program, w kt�rym do 10 elementowej tablicy wczytujemy N imion z klawiatury
(N jest wprowadzane przez u�ytkownika podczas dzia�ania programu). Po wprowadzeniu imion,
na ekranie ma pojawi� si� informacja o ilo�ci imion ko�cz�cych si� na liter� �a�. Po wykonaniu
operacji program ma zapyta� czy chcemy zako�czy� program czy wykona� go jeszcze raz.
*/


int main() {
    int n, i;
    int a = 0;
    char wybor;
    do {
    printf("Wprowadz liczbe N: ");
    scanf("%d", &n);
    char imiona[10][16];
    for (i = 0; i < n; i++) {
        printf("%d: ", i+1);
        scanf("%s", imiona[i]);
    }
    for (i = 0; i < n; i++) {
        int imieLast = strlen(imiona[i])-1;
        if (imiona[i][imieLast] == 'a' || imiona[i][imieLast] == 'A')
        a++;
    }
    printf("\n");
    printf("Ilosc imion konczacych sie na litere 'a': %d\n", a);
    printf("\nCzy chcesz wykonac program jeszcze raz? [t/n]: ");
    scanf(" %c", &wybor);
    a = 0;
    } while (wybor == 't' || wybor == 'T');
    return 0;
}

/*
int repeat()
    {
        char wybor;
        printf("Czy chcesz uruchomic program ponownie? [t/n]: ");
        scanf(" %c", wybor);
        if (wybor == 't' || wybor == 'T')
            return 1;
        else
            return 0;
    }
*/

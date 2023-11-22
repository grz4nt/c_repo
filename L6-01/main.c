#include <stdio.h>
#include <stdlib.h>
#include <string.h>

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

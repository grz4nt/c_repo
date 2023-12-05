#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int rnum[100];
    int a1 = -50;
    int a2 = -10;
    int b1 = 10;
    int b2 = 50;
    int suma = 0;
    char odp;
    srand(time(0));
    do {
        for (int i = 0; i < 100; i++) {
            do {
                rnum[i] = rand() % (b2 - a1 + 1) + a1;
            } while (!((rnum[i] >= a1 && rnum[i] < a2) || (rnum[i] > b1 && rnum[i] <= b2)));
            if (rnum[i] % 2 == 0)
                suma += rnum[i];
        }
        printf("Suma liczb parzystych z tablicy to: %d\n", suma);
        //   for (int i = 0; i < 100; i++)
        //       printf("%d\n", rnum[i]);
        printf("Czy uruchomic program ponownie? [t/n]: ");
        scanf_s(" %c", &odp);
        printf("\n");
    } while (odp == 't' || odp == 'T');
    return 0;
}

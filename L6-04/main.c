#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int main() {
    int rnum[100];
    int min = -100;
    int max = 100;
    int i, j;
    char odp;
    srand(time(0));
    do {
        printf("Tablica z losowymi liczbami:\n");
        for (i = 0; i < 100; i++) {
            do {
                rnum[i] = rand() % (max - min + 1) + min;
                printf("%4d ", rnum[i]);
            } while (!(rnum[i] >= min && rnum[i] <= max));
        }
         printf("\n");
         printf("\nSortowanie babelkowe:\n");
         for (i = 0; i < 100 - 1; i++) {
             for (j = 0; j < 100 - i - 1; j++) {
                 if (rnum[j] > rnum[j + 1]) {
                     int temp = rnum[j];
                     rnum[j] = rnum[j + 1];
                     rnum[j + 1] = temp;
                 }
             }
             
         }
         for (i = 0; i < 100; i++)
         printf("%4d ", rnum[i]);

        printf("\nCzy uruchomic program ponownie? [t/n]: ");
        scanf_s(" %c", &odp);
        printf("\n");
    } while (odp == 't' || odp == 'T');
    return 0;
}

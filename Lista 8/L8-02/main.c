#include <stdio.h>
#include <stdlib.h>

void silnia(int x) {
    double y = 1;
    for (int i = 1; i <= x; i++)
        y *= i;
    printf("%d! = %.lf\n", x, y);
}

int main()
{
    int n;
    printf("Wpisz n: ");
    scanf("%d", &n);
    silnia(n);
    return 0;
}

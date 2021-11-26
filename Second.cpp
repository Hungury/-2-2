#include <stdio.h>

int main()
{
    int n;
    do {
        printf("input N: ");
        scanf("%i\n", &n);
    } while (n < 1);
    int mass[n], min = 0, max = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%i", &mass[i]);
        if (mass[max] < mass[i]) max = i;
        if (mass[min] > mass[i]) min = i;
    }
    for (int i = 0; i < n; i++)
    {
        if (max == i) printf("%i ", mass[min]);
        else if (min == i) printf("%i ", mass[max]);
        else printf("%i ", mass[i]);
    }
}
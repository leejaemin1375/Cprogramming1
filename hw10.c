#include <stdio.h>

typedef struct city
{
    char name[100];
    char country[100];
    int population;
}City;

int main()
{
    City arr[3];
    printf("Input three cities:\n");
    for (int i = 0; i < 3; i++)
    {
        printf("Name> ");
        scanf_s(" %s", arr[i].name, sizeof(arr[i].name));
        printf("Country> ");
        scanf_s("%s", arr[i].country, sizeof(arr[i].country));
        printf("Population> ");
        scanf_s(" %d", &arr[i].population);
    }
    for (int i = 0; i < 3; i++)
    {
        printf("Printing the three cities:\n");
        printf("%d. %s in %s with a population of %d people\n", i + 1, arr[i].name, arr[i].country, arr[i].population);
    }
    return 0;
}

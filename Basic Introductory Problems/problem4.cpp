#include<stdio.h>

int main()
{
    int Integer;
    float pointValue;
    char character;

    printf("Enter integer number:\n");
    scanf("%d", &Integer);
    printf("Enter floating number:\n");
    scanf("%f", &pointValue);
    printf("Enter character:\n");
    scanf("%c", &character);

    printf("\nThe integer value: %d\n", Integer);
    printf("\nThe floating point value: %f\n", pointValue);
    printf("\nThe character value: %c\n", character);

    return 0;
}

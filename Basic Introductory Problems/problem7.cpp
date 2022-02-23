#include<bits/stdc++.h>

int main()
{
    int Integer;
    float pointValue;
    char character;

    printf("Enter integer number:\n");
    scanf("%d", &Integer);
    getchar();

    printf("Enter floating number:\n");
    scanf("%f", &pointValue);
    getchar();

    printf("Enter character:\n");
    scanf("%c", &character);
    getchar();

    printf("\nThe integer value: %d\n", Integer);
    printf("\nThe floating point value: %f\n", pointValue);
    printf("\nThe character value: %c\n", tolower(character));

    return 0;
}

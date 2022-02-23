#include<bits/stdc++.h>

/** Prototype */

void problem8();
void problem9();
void problem10();
void problem11();
void problem12();
void problem13();
void problem14();
void problem15();

/**-----------*/


int main()
{
    printf("Select any problem number from 8 to 15:\n");

    int select;
    scanf("%d", &select);
    printf("\n");

    if(select == 8)
    {
        problem8();
    }
    else if(select == 9)
    {
        problem9();
    }
    else if(select == 10)
    {
        problem10();
    }
    else if(select == 11)
    {
        problem11();
    }
    else if(select == 12)
    {
        problem12();
    }
    else if(select == 13)
    {
        problem13();
    }
    else if(select == 14)
    {
        problem14();
    }
    else if(select == 15)
    {
        problem15();
    }
    else
    {
        printf("Invalid!!\n");
    }

    return 0;
}


void problem8()
{
    int firstValue, middleValue, lastValue;
    printf("Enter 3 numbers:\n");
    scanf("%d", &firstValue);
    scanf("%d", &middleValue);
    scanf("%d", &lastValue);

    printf("First Value = %d Last Value = %d", firstValue, lastValue);
}

void problem9()
{
    double var1;
    bool var2 = true;

    printf("%e\n", var1);
    printf("%d\n", var2);
}

void problem10()
{
    long int var1;
    long long int var2;
    long double var3;
    short int var4;

    printf("%e\n", var1);
    printf("%e\n", var2);
    printf("%e\n", var3);
    printf("%i\n", var4);

    printf("%e\n", -var1);
    printf("%e\n", -var2);
    printf("%e\n", var3);
    printf("%i\n", -var4);
}

void problem11()
{
    unsigned int var1;
    unsigned long long int var2;
    unsigned long int var3;
    unsigned short int var4;

    printf("%e\n", var1);
    printf("%e\n", var2);
    printf("%e\n", var3);
    printf("%i\n", var4);

    printf("%e\n", -var1);
    printf("%e\n", -var2);
    printf("%e\n", var3);
    printf("%i\n", -var4);
}

void problem12()
{
    const double PI = 3.14;
    const double golden_ratio = 1.62;

    printf("%d\n", PI);
    printf("%d\n", golden_ratio);
}

void problem13()
{
    /// Program that will define a constant using “DEFINE” and print the value.
}

void problem14()
{
    /**

        Program that will define a global and a local variable with the same name but with different
        values, and then do the following steps in order-
        A. Print the value of the variable before defining the local variable

        B. Print the value of the variable after defining the local variable
        C. Explicitly print the value of the variable as global

    */
}

void problem15()
{
    double input = 123.098;

    printf("a. Val:\t %lf \n", input);
    printf("b. Val: %lf \n", input);
    printf("c. Val: %3.lf \n", input);
    printf("d. Val: %0.lf \n", input);
    printf("e. Val: %e \n", input);
}

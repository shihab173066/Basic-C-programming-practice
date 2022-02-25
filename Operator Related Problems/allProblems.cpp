#include<bits/stdc++.h>

/**----Prototype-----*/

void problem1();
void problem2();
void problem3();
void problem4();
void problem5();
void problem6();
void problem7();
void problem8();
void problem9();
void problem10();
void problem11();
void problem12();
void problem13();
void problem14();
void problem15();

/**------------------*/


int main()
{
    int problemNumber;
    printf("Enter any problem number from 1 to 15:\n");

    scanf("%d", &problemNumber);

    if(problemNumber == 1)
    {
        problem1();
    }
    if(problemNumber == 2)
    {
        problem2();
    }
    if(problemNumber == 3)
    {
        problem3();
    }
    if(problemNumber == 4)
    {
        problem4();
    }
    if(problemNumber == 5)
    {
        problem5();
    }
    if(problemNumber == 6)
    {
        problem6();
    }
    if(problemNumber == 7)
    {
        problem7();
    }
    if(problemNumber == 8)
    {
        problem8();
    }
    if(problemNumber == 9)
    {
        problem9();
    }
    if(problemNumber == 10)
    {
        problem10();
    }
    if(problemNumber == 11)
    {
        problem11();
    }
    if(problemNumber == 12)
    {
        problem12();
    }
    if(problemNumber == 13)
    {
        problem13();
    }
    if(problemNumber == 14)
    {
        problem14();
    }
    if(problemNumber == 15)
    {
        problem15();
    }

    return 0;
}


void problem1()
{
    double x, y;
    printf("Enter value of x:\n");
    scanf("%lf", &x);

    printf("Enter value of y:\n");
    scanf("%lf", &y);

    int reminder = (int)x%(int)y;

    printf("Addition: %lf\n", (x + y));
    printf("Subtraction: %lf\n", (x - y));
    printf("Multiplication: %lf\n", (x * y));
    printf("Quotient: %0.lf\n", (x / y));
    printf("Reminder: %d\n", reminder);
}

void problem2()
{
    const double Pi = 3.14;
    double radius;
    printf("Enter radius:\n");
    scanf("%lf", &radius);

    printf("Area: %lf\n", (2*Pi*radius));
}

void problem3()
{
    double a, b;
    printf("Enter value of a:\n");
    scanf("%lf", &a);

    printf("Enter value of b:\n");
    scanf("%lf", &b);

    printf("X = %lf\n", (((3.31 * (a*a))+(2.01 * (b*b*b))) / ((7.16 * (b*b))+ (2.01 * (a*a*a)))));
}

void problem4()
{
    int x;
    printf("Enter x:\n");
    scanf("%d", &x);

    printf("x++: %d\n", x++);
    printf("++x: %d\n", ++x);
    printf("x--: %d\n", x--);
    printf("--x: %d\n", --x);
}

void problem5()
{
    int x, y;
    printf("Enter x:\n");
    scanf("%d", &x);

    printf("Enter y:\n");
    scanf("%d", &y);

    printf("Incremented Value: %d\n", (x+=y));
    printf("Decremented Value: %d\n", (x-=y));
}

void problem6()
{
    int x, y;
    printf("Enter x:\n");
    scanf("%d", &x);

    printf("Enter y:\n");
    scanf("%d", &y);

    printf("Multiplication Value: %d\n", (x*=y));
    printf("Division Value: %d\n", (x/=y));
}

void problem7()
{
    double x, y;
    printf("Enter x:\n");
    scanf("%lf", &x);

    printf("Enter y:\n");
    scanf("%lf", &y);

    int X = x, Y = y;
    printf("Assignment X: %d\n", X);
    printf("Assignment Y: %d\n", Y);

    printf("Assignment X: %f\n", (float)x);
    printf("Assignment Y: %f\n", (float)y);
}

void problem8()
{
    int m, n;
    printf("Enter m:\n");
    scanf("%d", &m);

    printf("Enter n:\n");
    scanf("%d", &n);

    (m > n) ? printf("m is greater than n that is %d > %d",
                     m, n)
            : printf("n is greater than m that is %d > %d",
                     n, m);
}

void problem9()
{
    double X, Y, Z;
    int a, b, c;

    printf("Enter value for a:\n");
    scanf("%d", &a);
    printf("Enter value for b:\n");
    scanf("%d", &b);
    printf("Enter value for c:\n");
    scanf("%d", &c);

    X = (((a - b) / 3) + ((c) * (2 - 1)));
    Y = (a - ( b / ((((3 + c) * 2)) - 1)));
    Z = (a - (((b / 3) + (c * 2)) - 1));

    printf("X: %0.lf\n", X);
    printf("Y: %0.lf\n", Y);
    printf("Y: %0.lf\n", Z);
}

void problem10()
{
    int a, b, c;

    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter c:\n");
    scanf("%d", &c);

    printf("a)\n");
    if((a+b)<=80)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    printf("b)\n");
    if(!(a+c))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    printf("c)\n");
    if(a!=0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

void problem11()
{
    int a, b, c;

    printf("Enter a:\n");
    scanf("%d", &a);
    printf("Enter b:\n");
    scanf("%d", &b);
    printf("Enter c:\n");
    scanf("%d", &c);

    printf("a)\n");
    if(((a+b)<=80) && (b>= 0))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    printf("b)\n");
    if((a-b)==0 || c! 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }

    printf("c)\n");
    if((a! = b) || ((b<a) && (c > 0)))
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

void problem12()
{
    double a, b, c, discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);

    discriminant = b * b - 4 * a * c;

    if (discriminant > 0) {
        root1 = (-b + sqrt(discriminant)) / (2 * a);
        root2 = (-b - sqrt(discriminant)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    else if (discriminant == 0) {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-discriminant) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

}

void problem13()
{
    double x;
    printf("Enter a value for x:\n");
    scanf("%lf", &x);

    if(1 <= x && x <= 180)
    {
        int ans = ((2 * (pow(cos(x), 2))) - ((sqrt(3) * sin(x)) + sin(x/2)));
        printf("Answer: %d\n", ans);
    }
    else
    {
        printf("Invalid\n");
    }

}

void problem14()
{
    /// use of ceil(), floor(), abs()
}

void problem15()
{
    int intType;
    float floatType;
    double doubleType;
    char charType;

    printf("Size of int: %zu bytes\n", sizeof(intType));
    printf("Size of float: %zu bytes\n", sizeof(floatType));
    printf("Size of double: %zu bytes\n", sizeof(doubleType));
    printf("Size of char: %zu byte\n", sizeof(charType));
}

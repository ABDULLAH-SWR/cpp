#include <stdio.h>

int main()
{
    int a = 3;
    double b = 3.2;
    printf("Product : %lf\n", product(a, b));
}

int product(int a, double b)
{
    return a * b;
}
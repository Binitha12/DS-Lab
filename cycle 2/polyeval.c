#include <stdio.h>
#include <math.h>

typedef struct
{
    int coeff;
    int expo;
} polynomial;

int main()
{
    int size, x, result = 0;
    printf("Enter the size of the polynomial: ");
    scanf("%d", &size);
    polynomial p[size];

    printf("Enter the coefficient and power of the polynomial in descending order:\n");
    printf("For example, 3x^2+2x+1 can be entered as 1 2  1 1  1 0\n");
    for (int i = 0; i < size; i++)
        scanf("%d %d", &p[i].coeff, &p[i].expo);
    for (int i = 0; i < size; i++)
        printf("%dx^%d ", p[i].coeff, p[i].expo);
    printf("\n");
     printf("Enter a value of x to evaluate the above polynomial, i.e, ");
    scanf("%d", &x);

    for (int i = 0; i < size; i++)
        result =result +  p[i].coeff * pow(x, p[i].expo);

    printf("Result is = %d\n", result);

    return 0;
}

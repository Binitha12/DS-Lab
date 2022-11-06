#include <stdio.h>

typedef struct
{
    int coeff;
    int expo;
} polynomial;

int main()
{
    int size1, size2;
    printf("Enter the size of both polynomials: ");
    scanf("%d %d", &size1, &size2);
    polynomial p[100];

    printf("Enter the coefficient and power of the polynomial 1 in descending order:\n");
    printf("For example, 1x^2+1x+1 can be entered as 1 2  1 1  1 0\n");
    for (int i = 0; i < size1; i++)
        scanf("%d %d", &p[i].coeff, &p[i].expo);
    printf("Enter the coefficient and power of the polynomial 2 in descending order:\n");
    printf("For example, 1x^2+1x+1 can be entered as 1 2  1 1  1 0\n");
    for (int i = size1; i <size1 + size2; i++)
        scanf("%d %d", &p[i].coeff, &p[i].expo);

    printf("Polynomial 1\n");
    for (int i = 0; i < size1; i++)
        printf("%dx^%d ", p[i].coeff, p[i].expo);
    printf("\n");
    printf("Polynomial 2\n");
    for (int i = size1; i < size1 + size2; i++)
        printf("%dx^%d ", p[i].coeff, p[i].expo);
    printf("\n");

    int i = 0, j = size1, z = size1 +size2;
    while (i < size1 && j < size1 + size2)
    {
        if (p[i].expo > p[j].expo)
        {
            p[z].expo = p[i].expo;
            p[z].coeff = p[i].coeff;
            i++;
            z++;
        }
        else if (p[i].expo < p[j].expo)
        {
            p[z].expo = p[j].expo;
            p[z].coeff = p[j].coeff;
            j++;
            z++;
        }
        else
        {
            p[z].expo = p[i].expo;
            p[z].coeff = p[i].coeff + p[j].coeff;
            z++;
            i++;
            j++;
        }
    }
    

    printf("Sum\n");
    for (int i = size1 +size2; i < z; i++)
        printf("%dx^%d ", p[i].coeff, p[i].expo);
    printf("\n");

    return 0;
}
#include <stdio.h>

typedef struct
{
    int row;
    int col;
    int value;
} matrix;

int main()
{
    int n;
    printf("Enter the no: of non zero elements: ");
    scanf("%d", &n);

    matrix A[n + 1];
    A[0].value = n;

    printf("\nEnter the no: of rows and columns: ");
    scanf("%d %d", &A[0].row, &A[0].col);

    printf("\nEnter the sparse matrix representation: \n");
    for (int i = 1; i <= n; i++)
        scanf("%d %d %d", &A[i].row, &A[i].col, &A[i].value);

    printf("\nSparse matrix representation\n");
    for (int i = 0; i <= n; i++)
        printf("%d %d %d\n", A[i].row, A[i].col, A[i].value);
        
    float sparsity = (float)(A[0].row * A[0].col - A[0].value) / (A[0].row * A[0].col);
    printf("\nSparsity = %0.5f\n", sparsity);

}
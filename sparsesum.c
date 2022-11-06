#include <stdio.h>

typedef struct
{
    int row;
    int col;
    int value;
} matrix;

int main()
{

    int s1, s2;
    printf("Enter the number of non zero elements in matrice A aand B: ");
    scanf("%d %d", &s1, &s2);

    matrix A[s1];
    printf("Enter the sparse representation of matrix A: ");
    for (int i = 0; i <= s1; i++)
        scanf("%d %d %d", &A[i].row, &A[i].col, &A[i].value);

    matrix B[s2];
    printf("Enter the sparse representation of matrix B: ");
    for (int i = 0; i <= s2; i++)
        scanf("%d %d %d", &B[i].row, &B[i].col,&B[i].value);
    
    if (A[0].row != B[0].row && A[0].col != B[0].col)
    {
        printf("Matrix dimesions are incompatiable\n");
        return 1;
    }

    matrix C[A[0].value +   B[0].value];

    C[0].row = A[0].row;
    C[0].col = A[0].col;

    int z = 1, x = 1, y = 1;

    for (int i = 0; i < A[0].row; i++)
        for (int j = 0; j < A[0].col; j++)
        {
            if (A[x].row == i && A[x].col == j && B[y].row == i && B[y].col == j)
            {
                C[z].row = i;
                C[z].col = j;
                C[z].value = A[x].value + B[y].value;
                x++;
                y++;
                z++;
            }
            else if (A[x].row == i && A[x].col == j)
            {
                C[z].row = i;
                C[z].col = j;
                C[z].value = A[x].value;
                x++;
                z++;
            }
            else if (B[y].row == i && B[y].col == j)
            {
                C[z].row = i;
                C[z].col = j;
                C[z].value =B[y].value;
                y++;  
                z++;
            }
        }
    C[0].value = --z;

    printf("Sum\n");
    for (int i = 0; i <= C[0].value; i++)
        printf("%d %d %d\n", C[i].row, C[i].col, C[i].value);

    return 0;
}

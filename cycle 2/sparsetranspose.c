#include <stdio.h>

typedef struct
{
    int row;
    int col;
    int value;
} matrix;
int size;
matrix A[100],T[100];
void sparseTranspose(matrix A[],matrix T[])
{

    int n = A[0].value;
    T[0].row = A[0].col;
    T[0].col = A[0].row;
    T[0].value =A[0].value;

    int z = 1;
   // if (n > 0)
   // {
      //  current_t = 1;
        for (int i = 0; i < A[0].col; i++)
        {
            for (int j = 0; j <= n; j++)
            {
                if (A[j].col == i)
                {
                    T[z].row = A[j].col;
                    T[z].col = A[j].row;
                    T[z].value = A[j].value;
                    z++;
                }
            }
        }
    }


int main()
{
    int size;
    printf("Enter the number of non zero elements: ");
    scanf("%d", &size);

    A[size + 1],T[size + 1];
    A[0].value = size;

    printf("Enter the number of rows and coloumns: ");
    scanf("%d %d", &A[0].row, &A[0].col);

    printf("Enter the sparse matrix representation: ");
    for (int i = 1; i <= size; i++)
        scanf("%d %d %d", &A[i].row, &A[i].col, &A[i].value);

    printf("Sparse matrix representation before transpose\n");
    for (int i = 0; i <= size; i++)
        printf("%d %d %d\n", A[i].row, A[i].col, A[i].value);

    sparseTranspose(A,T);

    printf("Sparse matrix representation after transpose\n");
    for (int i = 0; i <= size; i++)
        printf("%d %d %d\n", T[i].row, T[i].col, T[i].value);
}
#include <stdio.h>

typedef struct
{
    int row;
    int col;
    int value;
} matrix;

int main()

{
    int size;
    int is_symmetric=1;
    printf("Enter the number of non zero elements: ");
    scanf("%d", &size);

    matrix A[size+1];
    A[0].value = size;

    printf("Enter the number of rows and coloumns: ");
    scanf("%d %d", &A[0].row, &A[0].col);
    
    if (A[0].row != A[0].col)
    {
        printf("Matrix is not a square matrix.Not symmetric\n");
        return 0;

    }
    else{

    

    printf("Enter the sparse matrix representation: ");
    for (int i = 1; i <= size; i++)
        scanf("%d %d %d", &A[i].row, &A[i].col, &A[i].value);

    printf("Sparse matrix representation\n");
    for (int i = 0; i <= size; i++)
        printf("%d %d %d\n", A[i].row, A[i].col, A[i].value);
    }

    for (int i = 1; i <= size; i++)
    {
        for (int j = 1; j <= size; j++)

        {
            if (A[i].row != A[j].col || A[i].col != A[j].row || A[i].value != A[j].value)
            is_symmetric=0;
i++;
j++;
            
    
        
        }

    }
    
        if (is_symmetric ==0 )
        {
            printf("Matrix is not symmetric\n");
            
        }
    else{
    printf("Matrix is sparse symmetric\n");
    }
    return 0;
    }
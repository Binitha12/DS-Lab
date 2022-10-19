/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

// Online C compiler to run C program online
#include <stdio.h>
#include<math.h>
int main()
{

    // Assume 4x5 sparse matrix

    int sparseMatrix[4][5] =

    {

        {0 , 1 , 0 , 0 , 4 },

        {0 , 7 , 0 , 7 , 0 },

        {0 , 0 , 0 , 1 , 0 },

        {0 , 2 , 0 , 0 , 0 }

    };
 

    int size = 0;
    int Sparsity;

    for (int i = 0; i < 4; i++)
{
        for (int j = 0; j < 5; j++)

            if (sparseMatrix[i][j] != 0)

                size++;
}

    // number of columns in compactMatrix (size) must be

    // equal to number of non - zero elements in

    // sparseMatrix

    int newMatrix[size][3];
 

    // Making of new matrix

    int k = 0;

    for (int i = 0; i < 4; i++)

        {
            for (int j = 0; j < 5; j++)

            if (sparseMatrix[i][j] != 0)

            {

                newMatrix[k][0] = i;

                newMatrix[k][1] = j;

                newMatrix[k][2] = sparseMatrix[i][j];

                k++;

            }
        }

    for (int i=0; i<size; i++)

    {

        for (int j=0; j<3; j++)

            printf("%d ", newMatrix[i][j]);
 

        printf("\n");

    }
Sparsity=size/(4*5);
printf("Sparsity is %d",Sparsity);
}
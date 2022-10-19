/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*****************************************************************************/

#include<stdio.h>

typedef struct{
    int row;
    int col;
    int value; 
} matrix;

 int main()
 { 
      int s1,s2;
      printf("Enter the no of non zero elements i matrices 1 and 2");
      scanf("%d %d",&s1,&s2);
       
       matrix Matrix1[s1];
       printf("Enter the sprase representationof matrix 1:");
       for(int i=0;i<s1;i++)
       scanf("%d %d %d" ,&Matrix1[i].row,&Matrix1[i].col,&Matrix1[i].value);
       
       
        matrix Matrix2[s2];
       printf("Enter the sprase representationof matrix 2:");
       for(int i=0;i<s2;i++)
       scanf("%d %d %d" ,&Matrix2[i].row, &Matrix2[i].col,&Matrix2[i].value);
       
       
     if (Matrix1[0].row != Matrix2[0].row && Matrix1[0].col != Matrix2[0].col)
    {
        printf("Matrix dimesions are incompatiable\n");
        return 1;
    }
    
    matrix matrixsum[Matrix1[0].value + Matrix2[0].value];
    
     matrixsum[0].row = Matrix1[0].row;
    matrixsum[0].col = Matrix1[0].col;
    
    
    
    
     int z = 1, x = 1, y = 1;

    for (int i = 0; i < Matrix1[0].row; i++)
        for (int j = 0; j < Matrix1[0].col; j++)
        {
            if (Matrix1[x].row == i && Matrix1[x].col == j && Matrix2[y].row == i && Matrix2[y].col == j)
            {
                matrixsum[z].row = i;
                matrixsum[z].col = j;
                matrixsum[z].value = Matrix1[x].value + Matrix2[y].value;
                x++;
                y++;
                z++;
            }
            else if (Matrix1[x].row == i && Matrix1[x].col == j)
            {
                matrixsum[z].row = i;
                matrixsum[z].col = j;
                matrixsum[z].value = Matrix1[x].value;
                x++;
                z++;
            }
            else if (Matrix2[y].row == i && Matrix2[y].col == j)
            {
                matrixsum[z].row = i;
                matrixsum[z].col = j;
                matrixsum[z].value = Matrix2[y].value;
                y++;
                z++;
            }
        }
    matrixsum[0].value = z;
     printf("Sum\n");
    for (int i = 0; i <= matrixsum[0].value; i++)
        printf("%d %d %d\n", matrixsum[i].row, matrixsum[i].col, matrixsum[i].value);

    return 0;

 } 
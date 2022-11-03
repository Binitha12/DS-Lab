/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include<stdio.h>
#define maxterms 100
struct sparse
{
    int row;
    int col;
    int value;
};
 struct sparse sp[maxterms], tsp[maxterms];
 int i,j,k=1;
int r,c,a[5][5];

void convertosparse()
{

    int i,j;
    sp[0].row=r;
    sp[0].col=c;
for(i=0;i<r;i++)
{
    for (j= 0;j<c; j++)
    {
       if(a[i][j]!=0)
       {
        
        sp[k].row=i;
        sp[k].col=j;
        sp[k++].value=a[i][j];
       }
    }
    
}
sp[0].value=k-1;
}
void printsparse()
{
    printf("converted matrix:");
    for(i=0;i<k;i++)
    {
        printf("%d  %d  %d \n",sp[i].row,sp[i].col,sp[i].value);
    }
}
void convertotranspose(struct sparse sp[maxterms])
{
    tsp[0].row=sp[0].col;
    tsp[0].col=sp[0].row;
    tsp[0].value=sp[0].value;
    int k=1;
    for(i=0;i<sp[0].col;i++)
    {
        for(j=1;j<=sp[0].value;j++)
        {
        if(sp[j].col==i)
        
        {
    
        tsp[k].row=i;
        tsp[k].col=sp[j].row;
        tsp[k++].value=sp[j].value;
        }
        }
    }
}
void printranspose()
{
    printf("Transpose:");
    for(i=0;i<k;i++)
    printf("\n %d  %d  %d \n",tsp[i].row,tsp[i].col,tsp[i].value);
    
}
int main()
{
    
    printf("Enter the no of rows:");
    scanf("%d",&r);
    printf("Enter the no of coloumns:");
    scanf("%d",&c);
    printf("Enter the matrix");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        scanf("%d",&a[i][j]);
    }
    convertosparse();
    printsparse();
    convertotranspose(sp);
    printranspose();
}

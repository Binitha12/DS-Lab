#include<stdio.h>
#include<stdlib.h>
#define MAX 100

int stack[MAX];
int top=-1;

int n,top1,top2,data,k,m;
 

 void dec2bin(int n)
 {
    while(n!=0)
    {
         push1(n%2);
         n=n/2;
     }
 } 


 push1(int data)
 {
 if(top==MAX)
 {
 printf("Stack is full");
 }
 else
 {
stack[++top]=data;
 }

 }



 void print1()
{
    if(top==-1)
    {
    printf("Stack is empty");
    exit(1);
    }
    else{
        for(int i=top;i>=0 ;i--)
        printf("%d",stack[i]);
    }
}



 push2(int m)
 {

   if(top1==MAX)
   {
    printf("Stack is full");
    }
  else
 
  { 

  stack[++top1]=m;
   } 

 }
 


 void dec2hex(int k)
 {
    while(k!=0)
    {
        push2(k%16);
        k=k/16;
    }


 }

void print2()
{
    if(top1==-1)
    {
        printf("Stack is empty");
        exit(1);
    }
    else
  {
        for(int i=top1;i>top;i--)
     {
         if(stack[i]<10)
         printf("%d",stack[i]);
        else if(stack[i]==10)
         printf("A");
         else if(stack[i]==11)
         printf("B");
        
        else if(stack[i]==12)
         printf("C");
        
        else if(stack[i]==13)
         printf("D");
        
        else if(stack[i]==14)
         printf("E");
        
        else 
         printf("F");
        
        
      }
  }
 }


 int main()
 {
    int dec;

    printf("Enter the decimal number:");
    scanf("%d",&dec);
    dec2bin(dec);
    printf("The corresponding binary no is\n");
    top1=top;
    print1();
    dec2hex(dec);
    printf("The corresponding Hexadecimal no is\n");
    print2();
    
     return 0;
 }
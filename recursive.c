#include<stdio.h>
#include<stdlib.h>
void main()
{
  /*--------------------------declaration Section---------------------------------*/
   int n,choice,fb;
   long f;
   long fact(int);
   int fib(int);
   //int ack(int);
 /*---------------------------declartion end--------------------------------------*/
   
   while(1)
   {
     printf("\ntype 1 for factorial and type 2 for exit");
     printf("\nEnter the choice");
     scanf("%d",&choice);
  
    switch(choice)
   {
    case 1:printf("enter the number to find factorial");
           scanf("%d",&n);
           if(n>0)
           {
            f=fact(n);
            printf("factorial of the given number is %ld",f);
           }
           else if(n==0)
            {
             f=fact(n);
             printf("factorial of the given number is %ld",f);
            }
           else
            printf("type correct number");
           break;
    case 2:printf("enter the number of places ");
           scanf("%d",&n);
           fb=fib(n);
           printf("nth terms of the series :%d",fb);
           break;
    case 3:exit(0);
    default : printf("error found!!!!!!!!");
   }
 }
}
//********************************sub-section********************************************
long fact(int x)
{
  if(x==0)
    return 1;
 else
   return x*fact(x-1);
return -1;
}
int fib(int x)
{
  if(x<3)
    return x-1;
  else 
    return fib(x-1)+fib(x-2);
}

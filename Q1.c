#include<stdio.h>
void swap(int * , int *);
int main()
{
     int x,y;
     printf("Enter the value of first no. : ");
     scanf("%d",&x);
     printf("\nEnter the value of second no. : ");
     scanf("%d",&y);
     swap (&x,&y);
     return 0;
}
void swap(int *p,int *q)
{
    int t;
    t=*p;
    *p=*q;
    *q=t;
    printf("The swapped value of x and y are : %d and : %d ",*p,*q);
}

#include<stdio.h>
int  sum(int *,int);
int main()
{
    int a[10],i,y;
    printf("Enter the values in array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    y=sum(a,10);
    printf("The sum of array is : %d ",y);
     return 0;
}
int sum (int*p,int z)
{
    int i,sum=0;
    for(i=0;i<10;i++)
    {
       sum=sum+(*p);
       p++;
    }
    return sum;
}

#include<stdio.h>
int main()
{
    int a[10],i,*p;
    printf("Enter the values in array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    p=&a[9];
    printf("The elements in reverse order are : \n");
    for(i=0;i<10;i++)
        printf("%d\n",*p--);

     return 0;
}

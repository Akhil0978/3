#include<stdio.h>
int main()
{
    int x,y ,*p,*q;

    printf("Enter the first no. : ");
    scanf("%d",&x);
    printf("Enter the second no. : ");
    scanf("%d",&y);
    p=&x;
    q=&y;
    if(*p>*q)
    {
        printf("The maximum no. is : %d  ",*p);
    }
    else
        printf("The maximum no. is : %d",*q);
    return 0;
}

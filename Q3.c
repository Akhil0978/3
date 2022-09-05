#include<stdio.h>
void sort(int * ,int );
int main()
{
    int a[10],i;
    printf("Enter the values in array \n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sort(a,10);
    printf("The sorted array is \n");
    for(i=0;i<9;i++)
        printf(" %d \n",a[i]);
     return 0;
}
void sort (int *ptr , int size)
{
    int i,j, temp;
    for(i=0;i<size-1;i++)
    {
        for(j=i;j<size;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
}

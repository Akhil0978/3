#include<stdio.h>
void swap (char **, char **);
int main()
{
   char *a[20] , *b[20] ;
   printf("Enter 2 strings \n");
   gets(a);
   gets(b);
   swap(&a,&b);
   printf("%s %s",a,b);
   return 0;
}
void swap (char **x, char **y)
{
    char *temp;
    temp=*x;
    *x=*y;
    *y=temp;
}

#include<stdio.h>
int strlen(char *);
int main()
{
    char str[20];
    int x;
    printf("Enter a string : ");
    gets(str);
    x=strlen(str);
    printf("The length of string is : %d ",x);
    return 0;
}
int strlen(char *p)
{
   int count =0;
   while (*p!='\0')
   {
       count ++;
       p++;
   }
   return count;
}

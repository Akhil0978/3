#include<stdio.h>
int strlen(char *);
int main()
{
    char str[20];
    int x;
    printf("Enter a string : ");
    gets(str);
    x=strlen(str);
    printf("The no. of vowels in string is : %d ",x);
    return 0;
}
int strlen(char *p)
{
   int count =0 ,c=0;
   while (*p!='\0')
   {
        if(*p=='a'  ||  *p=='A'  ||  *p=='e'  ||  *p=='E'  ||  *p=='i'  ||  *p=='I'  ||  *p=='o'  || *p=='O'  || *p=='u'  ||  *p=='U')
        count ++;
        p++;
   }
   return count;
}

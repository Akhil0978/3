#include<stdio.h>
#include<string.h>
int main()
{
    char *s;
    int len ,i;
    printf("Enter a string : ");
    gets(s);
    len=strlen(s);
    printf("\nThe string in reverse order is\n");
    for(i=len;i>=0;i--)
        printf("%c",*(s+i));
    return 0;
}

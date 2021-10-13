#include<stdio.h>
#include<string.h>
int main()
{
    char a[]="R N S Institute of Technology",c;
    int b,i=0;
    printf("The string is:%s\n", a);
    b=strlen(a);
    printf("Length of the string:%d\n", b);
    printf("The string after concatenation:");
    puts(strcat(a," Bengaluru"));
    printf("The string after converted to uppercase letters is:");
    while(a[i])
    {
        c=a[i];
        printf("%c", toupper(c));
        i++;
    }
    return 0;
}
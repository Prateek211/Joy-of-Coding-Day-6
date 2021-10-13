#include<stdio.h>
#include<string.h>
int main()
{
    char a[50];
    char *b;
    int n;
    b=a;
    printf("Enter the string:\n");
    gets(a);
    n=strlen(a);
    printf("The abbreviation is : ");
    printf("%c", a[0]);
    for(int i=1;i<n;i++)
        if(*(b+i)==' ')
            printf("%c", a[i+1]);
    return 0;
}
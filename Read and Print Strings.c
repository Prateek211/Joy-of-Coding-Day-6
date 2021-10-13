#include<stdio.h>
int main()
{
    char c,a[100],b[100];
    printf("Type a sentence:");
    fgets(b,sizeof(b),stdin);
    printf("Type a character:");
    c=getchar();
    printf("Type a word:");
    scanf("%s", a);
    printf("\nThe sentence is:\n%s", b);
    printf("The Character is:\n%c\n", c);
    printf("The word is:\n%s", a);
    return 0;
}
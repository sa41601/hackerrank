#include <stdio.h>

int main(void)
{
    char s[100];
    scanf("%[^\n]*c", s);    // remember this one.
    printf("Hello, World!\n");
    printf("%s",s);
    return 0;
}

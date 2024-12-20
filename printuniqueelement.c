#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[] = "This ,is ?a /test _-.string";
    char *p = s;

    while (*p!='\0')
    {
        if (!isalpha(*p) || !isdigit(*p))
        {
            printf("%c ", *p);
        }
        p++;
    }
    
    return 0;
}
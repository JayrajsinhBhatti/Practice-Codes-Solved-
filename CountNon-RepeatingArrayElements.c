#include<stdio.h>
#include<string.h>
#include<ctype.h>

void len(char s[])
{
    int count=0;
    while (s[count] != '\0')
    {
        count++;
    }
    printf("Len is: %d", count);
}

int main()
{
    char s[] = "abcde";
    
    len(s);

    return 0;
}
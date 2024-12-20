#include<stdio.h>
#include<string.h>
int main()
{
    char s[] = "string";
    int len = strlen(s);
    char temp;

    printf("Original string: %s\n", s);

    for(int i=0;i<len/2;i++)
    {
        temp = s[i];
        s[i] = s[len-i-1];
        s[len-i-1] = temp;
    }
    printf("Reversed string: %s", s);
    return 0;
}
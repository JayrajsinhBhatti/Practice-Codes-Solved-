#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int compareChars(const void *a, const void *b)
{
    return (*(char *)a - *(char *)b);
}
int main()
{
    char s1[] = "Evil";
    char s2[] = "Vile";
    char *p1 = s1;
    char *p2 = s2;

    while (*p1!='\0')
    {
        *p1 = tolower(*p1);
        p1++;
    }
    while (*p2!='\0')
    {
        *p2 = tolower(*p2);
        p2++;
    }
    qsort(s1, strlen(s1), sizeof(char), compareChars);
    qsort(s2, strlen(s2), sizeof(char), compareChars);
    if (strcmp(s1, s2)==0)
    {
        printf("The strings are anagrams");
    }
    else
    {
        printf("The strings are not anagrams");
    }
    
    return 0;
}
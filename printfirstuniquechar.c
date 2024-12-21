#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char s[] = "abcdefghijb";
    int len = strlen(s);
    int isUnique = 0;

    for(int i=0;i<len;i++)
    {
        for(int j=0;j<len;j++)
        {
            if (s[i] == s[j] && i!=j)
            {
                isUnique = 1;
                break;
            } 
        }
            if (isUnique==1)
            {
                printf("%c is the non-Unique character", s[i]);
                return 0;
            }
    }
    return 0;
}
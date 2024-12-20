#include<stdio.h>
int main()
{
    char s[] = "This is a test string";
    int count = 0;
    int maxcount = 0;
    char *p = s;

    while (*p != '\0')
    {
        if (*p != ' ')
        {
            count++;
        }
        else
        {
            if (count > maxcount)
            {
                maxcount = count;
            }
            count = 0;
        }
        p++; 
    }
    if (count > maxcount)
    {
        maxcount = count;
    }
    
    printf("The length of the longest word is: %d", maxcount);
    
    return 0;
}
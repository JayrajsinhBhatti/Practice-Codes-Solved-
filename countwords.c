#include<stdio.h>
int main()
{
    char s[] = "This is a test string";
    int count = 0;
    char *ptr = s;

    while (*ptr != '\0')
    {
        if (*ptr==' ')
        {
            count++;
        }
        ptr++;
    }
    printf("The number of words are: %d", count+1); //count+1 because the last word doesn't have a space after it
    
    return 0;
}
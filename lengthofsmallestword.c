#include<stdio.h>
#include<limits.h>
int main()
{
    char s[] = "This is a test string.";
    char *p = s;
    int count = 0;
    int minimumcount = INT_MAX;

    while (*p!='\0')
    {
        if (*p != ' ')
        {
            count++;
        }
        else{
            if (count<minimumcount)
            {
                minimumcount = count;
            }
            count = 0;
        }
        p++;
    }
    if (count<minimumcount)
    {
        minimumcount = count;
    }
    
    printf("%d", minimumcount);
    return 0;
}
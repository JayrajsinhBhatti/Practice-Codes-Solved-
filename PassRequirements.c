#include<stdio.h>
#include<string.h>
#include<ctype.h>

int checkPass(char s[])
{
    int isUpper=0,  isLower=0,  isDigit=0,  isspecialchar=0;
    int len = strlen(s);
    if (len<8)
    {
        return 0;
    }
    for(int i=0;i<len;i++)
    {
        if (isupper(s[i]))
        {
            isUpper = 1;
        } else if (islower(s[i]))
        {
            isLower=1;
        } else if(isdigit(s[i]))
        {
            isDigit=1;
        } else if(ispunct(s[i]))
        {
            isspecialchar=1;
        }
    }
    return isUpper && isLower && isDigit && isspecialchar;
}

int main()
{
    //at least 8 characters long
    //atleast 1 uppercase and 1 lowercase letter
    //atlest 1 digit
    //atleast 1 special character

    char s[12];
    // char *ptr=s;


    while(1)
    {
        printf("Enter a 12 digit password: ");
        gets(s);

    if (checkPass(s))
    {
        printf("Password is strong");
        break;
    } else
    {
        printf("Password is weak");
    }
    }
    
    
    
    return 0;
}
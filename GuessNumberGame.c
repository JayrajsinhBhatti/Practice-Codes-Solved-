#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<time.h>
#include<stdlib.h>

int randomNum()
{
    return rand() %6 + 1;
}

int main()
{
    int num, choice;
    srand(time(NULL));
    
    do
    {
        printf("1. Play Game\n");
        printf("0. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice<0 || choice>1)
        {
            printf("Invalid choice\n");
        }
        
        if (choice==1)
        {
            printf("Enter a number between 1-6: ");
            scanf("%d", &num);
            if (num==randomNum())
            {
            printf("You guessed it right!\n");
            }
            else{
            printf("You guessed it wrong!\n");
            }
        }
        }while (choice!=0);
    
    
    return 0;
}
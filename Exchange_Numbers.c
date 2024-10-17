#include<stdio.h>
void exchange(int,int);

int main()
{
    int num1,num2;
    printf("Enter two numbers: \n");
    scanf("%d %d",&num1, &num2);
    printf("Numbers before exchange: %d, %d \n",num1,num2);

    exchange(num1,num2);

    return 0;
}
void exchange(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
    printf("Numbers after exchange :%d %d",a,b);
}
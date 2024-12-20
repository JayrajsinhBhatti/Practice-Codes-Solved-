#include<stdio.h>
int main()
{
    int a[] = {7,1,3,9,0,2,4,5,8,6};

    int temp = 0;
    
    for(int i=0;i<10;i++)
    {
        for(int j=0;j<10;j++)
        {
            if (a[i]<a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    for(int i=0;i<10;i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}
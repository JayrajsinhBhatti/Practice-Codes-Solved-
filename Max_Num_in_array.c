#include<stdio.h>
#include<string.h>
#include<math.h>

//
//Finding Maximum Number in an array//
//

int find_max(int []);

int main()
{
    int a[5], max=a[0];
    printf("ENter the values in the array: ");
    for(int i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    int maximum=find_max(a);
    printf("The Maximum value fromm given array is: %d",maximum);

}
int find_max(int a[5])
{
    int max=a[0];
    for(int j=1;j<5;j++)
    {
        
        if(max<a[j])
        {
            max=a[j];
        }
        
    }
    return max;
}
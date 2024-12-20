#include<stdio.h>
#include<string.h>

void ShiftRight(int s[], int l);

int main()
{
    int s[] = {1,2,3,4,5,6};
    int l = sizeof(s)/sizeof(s[0]);

    ShiftRight(s, l);
    return 0;
}
void ShiftRight(int s[], int l)
{
    int last = s[l-1];
    for(int i=l-1;i>0;i--)
    {
        s[i] = s[i-1];
    }
    s[0] = last;
    for(int i=0;i<l;i++)
    {
        printf("%d ", s[i]);
    } 
}
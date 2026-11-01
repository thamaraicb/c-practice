#include<stdio.h>
int isPerfect(int n);
int main()
{
    for(int i=1;i<=1000;i++)
    {
        if(isPerfect(i))
            printf("%d  ",i);
    }
    return 0;
}
int isPerfect(int n)
{
    int sum=0;
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        {
            sum+=i;
        }
    }
    if(sum==n)
        return 1;
    else
        return 0;
}
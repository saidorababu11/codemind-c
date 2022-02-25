#include<stdio.h>
int main()
{
    int i,count=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
        count=count+1;
        }
    }
    if(count==2)
    {
        printf("prime");
    }
    else
    {
        printf("not a prime");
    }
    return 0;
}
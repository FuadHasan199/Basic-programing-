#include<stdio.h>
int main()
{
    int n,i;
    long long int x;
    scanf("%d",&n);
    long long int a[n];
    for(i=1;i<n;i++)
    {
        scanf("%lld",&x);
        a[x]=1;
    }
    for(i=1;i<=n;i++)
    {

        if(a[i]!=1)

            printf("%d",i);
    }
    return 0;
}

#include<stdio.h>
int main()
{
    int n,i,count=0;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i!=0)
        {
            continue;
        }
     count=count+1;
    }
    if(count>2)
        printf("Composite");
    else if(count==2)
        printf("Prime");
        else if(count==1)
            printf("Special case");
        else if(count<1)
            printf("Not prime");
    return 0;
}

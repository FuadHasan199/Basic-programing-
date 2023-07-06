#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
   // a[0]=0;
   // a[1]=1;
    printf("%d ",a[0]);
   // printf("%d ",a[1]);
    for(i=1;i<n;i++)
    {
        int sum=i+(i-1);
        printf("%d ",sum-1);
    }
    return 0;
}

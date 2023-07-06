#include<stdio.h>
int main()
{
    int i,n;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    int m1=a[0];
    int m2=a[0];
    int m3=a[0];
    for(i=0;i<n;i++)
    {
        if(a[i]<m1)
            m1=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<m2&&a[i]>m1)
        m2=a[i];
    }
    for(i=0;i<n;i++)
    {
        if(a[i]<m3&&a[i]>m2)
            m3=a[i];
    }
    printf("%d",m3);
    return 0;
}

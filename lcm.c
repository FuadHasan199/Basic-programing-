#include<stdio.h>
int main()
{
    int m,n,k;
    scanf("%d %d",&m,&n);
    printf("The LCM of %d and %d is ",m,n);
    k=m*n;
    while(m!=0||n!=0)
    {
        if(m>n)
            m=m%n;
        else if(n>m)
            n=n%m;
        if(m==0)
        printf("%d.",k/n);
        else if(n==0)
        printf("%d.",k/m);
    }
    return 0;
}

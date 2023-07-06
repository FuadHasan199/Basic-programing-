#include<stdio.h>
int main()
{
    int m,n;
    scanf("%d %d",&m,&n);
    int p=m;
    int q=n;
    while(m!=0||n!=0)
    {
        if(m>n)
            m=m%n;
        else if(n>m)
            n=n%m;
       if(m==0)
        printf("The GCD of %d and %d is %d",p,q,n);
       else if(n==0)
        printf("The GCD of %d and %d is %d",p,q,m);
    }
    return 0;
}

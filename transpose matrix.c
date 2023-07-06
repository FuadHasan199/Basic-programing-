#include<stdio.h>
#include<string.h>
int main()
{
    int i,j,n,m;
    scanf("%d%d",&n,&m);
    int a[n][m];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d\t",a[j][i]);
        }
        printf("\n");
    }
    return 0;

}

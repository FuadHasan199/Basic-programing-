#include<stdio.h>
#include<string.h>
int main()
{
    int r,i,j,p,q;
    char a[34][34];
    scanf("%d",&r);
    for(i=1;i<=r;i++)
     {
         for(j=1;j<=2;j++)
          {
            scanf("%d %d",&p,&q);
          }
     }
    for(i=1;i<=3;i++)
    {
        for(j=1;j<=3;j++)
        {
            if(i,j==a[i][j])
            continue;

            printf("%d %d",i,j);
        printf("\n");
        }

    }
}

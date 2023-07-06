#include<stdio.h>
int main()
{
    int a[3][3];
    int flag=0,m[3],n[3];
    int i,j,s_row,s_col,p=0,q=0;
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
        scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        s_row=s_col=0;
        for(j=0;j<3;j++)
        {
            s_row+=a[i][j];
            s_col+=a[j][i];
        }
         m[i]=s_row;
         n[i]=s_col;
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i==j)
            {
               q+=a[i][j];
            }

        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(i+j!=2)
            {
                continue;
            }
            p+=a[i][j];
        }
    }
    for(i=0;i<3;i++)
    {
        if(!((m[i]==n[i])&&(n[i]==p)&&(p==q)))
        flag=1;
    }
    if(flag==1)
        printf("No");
    else
        printf("Yes");
    return 0;
}

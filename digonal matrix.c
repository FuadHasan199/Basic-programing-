#include<stdio.h>
int main()
{
    int row,col,i,j;
    scanf("%d %d",&row,&col);
    int a[row][col];
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    if(row==col)
    {
        int ans=0;
        for(i=0;i<row;i++)
        {
            for(j=0;j<col;j++)
            {
                if(i==j)
                {
                    continue;
                }
                if(a[i][j]!=0)
                {
                    ans=1;
                }
            }
        }
        if(ans==1)
            printf("Not diagonal");
        else
            printf("Diagonal");
    }
    else{
        printf("Not diagonal");
    }
    return 0;
}

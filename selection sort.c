#include<stdio.h>
#define N 150
int main()
{
    int i,j,m_ind;

     int a[5]= {15,16,6,8,5};
    int b[5];
    int max=a[0];
    for(j=0; j<5; j++)
    {
        for(i=0; i<5; i++)
        {
            if(a[i]>max)
            {
                max=a[i];
                m_ind=i;
            }
        }
        b[j]=max;
        //a[m_ind]=100;
    }
    for(j=0;j<5;j++)
    {
        printf("%d ",b[j]);
    }
    return 0;
}

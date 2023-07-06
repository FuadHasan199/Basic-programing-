#include<stdio.h>
#include<string.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    char s1[n],s2[n];
    for(i=1;i<=n;i++)
    {
        printf("strings[%d]: ",i);
       scanf("%s",&s1[i]);
       s2[n]+=s1[i];
  }
    printf("%s",s2);
    return 0;
}

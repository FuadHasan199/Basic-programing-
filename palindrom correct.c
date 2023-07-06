#include<stdio.h>
#include<string.h>
int main()
{
    char s[300];
    int l;
    int c=0;
    gets(s);
    l=strlen(s);
    for(int i=0;i<l/2;i++)
    {

            if(s[i]==s[l-1-i])
                c=c+1;
    }
    if(c==l/2)
        printf("Yes\n");
    else if(c!=l/2)
        printf("fuad");
    return 0;
}

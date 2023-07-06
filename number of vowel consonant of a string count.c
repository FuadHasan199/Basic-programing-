#include<stdio.h>
#include<string.h>
int main()
{
    char s1[200];
    int l,vowel=0,consonant=0;
    gets(s1);
    l=strlen(s1);
    for(int i=0;i<l;i++)
    {
        if(s1[i]=='a'||s1[i]=='A'||s1[i]=='e'||s1[i]=='E'||s1[i]=='i'||s1[i]=='I'||s1[i]=='o'||s1[i]=='O'||s1[i]=='u'||s1[i]=='U')
            vowel++;
        else
        {
            consonant++;
        }
    }
    printf("vowel is %d\n",vowel);
    printf("consonant is %d",consonant);
    return 0;
}

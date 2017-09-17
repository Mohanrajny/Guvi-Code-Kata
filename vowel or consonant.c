#include<stdio.h>
int main()
{
char ch;
int lw=0,up=0;
scanf("%c",&ch);
if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
    lw=1;
else if(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
    up=1;
if(lw|up)
    printf("%c Vowel",ch);
else
    printf("%c Consonant",ch);
}

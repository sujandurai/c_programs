

#include <stdio.h>

int main()
{
    char x,y;
    int a,b,c;
    printf("enter two character ");
    scanf("%c\n%c",&x,&y);
    a=x;
    b=y;
    
    if(x=='a'||x=='A'||x=='e'||x=='E'||x=='i'||x=='I'||x=='o'||x=='O'||x=='u'||x=='U'||y=='a'||y=='A'||y=='e'||y=='E'||y=='i'||y=='I'||y=='o'||y=='O'||y=='u'||y=='U')
        {
        ;
        printf("both the character are vowels");
        printf("the sum of two numbers%d ",a+b);
        }
    else 
        { 
        ;
        printf("both the character are consonant");
        printf("the difference of two numbers%d",a-b);
        }
    return 0;
}
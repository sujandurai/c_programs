

#include <stdio.h>
void display();

int main()
  { 
    int a;
    printf("the given number");
    scanf("%d",&a);
    
    if(a%7==0||a%10==7)
    printf("the given %d number is buzz number\n",a);
    else
    printf("the given %d number is not buzz number\n",a);
    display();
    return 0;
  }
void display()
  { 
    int a,b;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    if(a%b==0)
    printf("b is divisor of a\n");
    else
    printf("b is not divisor of a");
  }
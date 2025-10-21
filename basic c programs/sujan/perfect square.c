#include<stdio.h>
#include<math.h>
int main()
{
 int num,y;
 float x;
 printf("enter the 1 no\n:");
 scanf("%d",&num);
 
 x=sqrt(num);
 printf("the x value %f \n",x);
 y=(float)x;
 printf("the x value %d \n",y);
 if(x==y)
 printf("the given no is perfect sqare");
 else
 printf("not");
}26
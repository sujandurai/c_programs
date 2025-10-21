#include <stdio.h>

int main()
{
 int no;
 printf("Enter the month no:");
 scanf("%d",&no);
 if(no==1||no==3||no==5||no==7||no==8||no==10||no==12)
 {
     printf("The no of days is 31\n");
     
         if(no==1||no==3)
         
         printf("the month in first quadrant");
         else if(no==5)
         printf("the month in second quadrant");
         else if(no==7||no==8)
         printf("the month in third quadrant");
         
         else
         printf("the month in fourth quadrant");
         
     
 }
 else if(no==2)
 {
 printf("The no of days is 28\n");
 printf("the month in first quadrant");
 }
 else if(no==4||no==6||no==9||no==11)
 {
     printf("the no of days is 30\n");
     
         if(no==4||no==6)
         
         printf("the month in second quadrant");
         else if(no==9)
         printf("the month in third quadrant");
         else
         printf("the month in fourth quadrant");
         
     
 }
 else
 printf("invalid month no");
}

#include <stdio.h>

int main()
{
    int i,j,k,num,num2,n,temp,temp1,count=0;
    scanf("%d",&n);
    int a[n],b[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=i;j<n;j++)
        {
            temp=a[i];
            num=j;
            temp1=a[j+1];
            if(a[j]==temp1-1)
            {
            count++;
            }
            else if(count>0)
            {   
                printf("%d",temp);
                printf("->");
                printf("%d",a[j]);
                i=num;
                break;
            }
            else
            {
            printf("%d ",a[i]);
            break;
            }
        
        }
        
    }

    return 0;
}
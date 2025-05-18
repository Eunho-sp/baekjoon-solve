#include <stdio.h>
int main()
{
    int a,b,i,j;
    int sum=0;
    int num=0;
    int count=1;
    
    scanf("%d %d",&a,&b);

    for(i=a;i<=b;i++)
    {
        for(j=1;j<=100;j++)
        {
            if(j*j == i)
            {
                sum = sum + i;
                if(count == 1)
                {
                    num = num + i;
                }
                count = count + 1;
            }
        }   
    }

    if(sum != 0)
    {
        printf("%d\n",sum);
        printf("%d",num);
    }
    else
        printf("-1");

    return 0;
}
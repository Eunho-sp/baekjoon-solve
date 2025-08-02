#include <stdio.h>
int a[101][101]={};

int sqr()
{
    int x, y;
    scanf("%d %d",&x,&y);

    for(int j=x;j<x+10;j++)
    {
        for(int k=y;k<y+10;k++)
        {
            a[j][k]=1;
        }
    }
}

int main()
{
    int n;
    int sum=0;
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        sqr();
    }

    for(int q=0;q<101;q++)
    {
        for(int p=0;p<101;p++)
        {
            if(a[q][p]==1)
            {
                sum = sum + 1;
            }
        }
    }

    printf("%d",sum);

    return 0;

}
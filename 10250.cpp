#include <stdio.h>
int main()
{
    int n;
    int a[1000]={'\0'};
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        int h,w,n;
        scanf("%d %d %d",&h,&w,&n);

        if(n%h==0)
        {
            a[i]=(h*100)+(n/h);
        }
        else
        {
            a[i]=((n%h)*100)+(n/h+1);
        }
    }

    for(int j=0;j<n-1;j++)
    {
        printf("%d\n",a[j]);
    }
    printf("%d",a[n-1]);

    return 0;
}
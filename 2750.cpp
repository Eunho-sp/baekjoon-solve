#include <stdio.h>
int main()
{
    int a[1001] = {};
    int atm = 0;
    int n;
    
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    for(int j = 0;j<n-1;j++)
    {
        for(int l = 0;l<n-1;l++)
        {
            if(a[l]>a[l+1])
            {
                atm = a[l];
                a[l] = a[l+1];
                a[l+1] = atm;
            }
        }
    }

    for(int k = 0;k<n;k++)
    {
        printf("%d\n",a[k]);
    }

    return 0;
}
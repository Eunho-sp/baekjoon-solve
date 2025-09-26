#include <stdio.h>
int main()
{
    int count = 0;
    char a[101]="";
    int b[123]={};
    for(int t=0;t<123;t++)
    {
        b[t] = -1;
    }

    scanf("%s",&a);

    for(int i=0;i<101;i++)
    {
        if(b[a[i]]==-1)
        {
            b[a[i]]=count;
        }
        count++;
    }

    for(int j=97;j<122;j++)
    {
        printf("%d ",b[j]);
    }
    printf("%d",b[122]);

    return 0;
}
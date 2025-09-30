#include <stdio.h>
int a[100001]={'\0'};
int s[100001]={'\0'};


int main()
{
    int n,m;

    scanf("%d %d",&n,&m);

    for(int v=1;v<=n;v++)
    {
        scanf("%d",&a[v]);
        if(v == 0)
        {
            s[v] = a[v];
        }
        else
        {
            s[v] = s[v-1] + a[v];
        } 
    }

    for(int k=0;k<m;k++)
    {
        int i,j;
        int sum = 0;
        scanf("%d %d",&i,&j);

        printf("%d\n",s[j]-s[i-1]);
    }

    return 0;

}
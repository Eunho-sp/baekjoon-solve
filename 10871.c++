#include <stdio.h>
int main()
{
    int n,x;
    int a;
    scanf("%d %d",&n,&x);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a);
        if(a<x)
        {
            printf("%d ",a); //공백으로 구분
        }
    }

    return 0;
}
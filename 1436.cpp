#include <stdio.h>
#include <string.h> // strstr() , sprintf() 사용

int che(int x)
{
    char a[10];
    sprintf(a,"%d",x);
    char *result = strstr(a, "666"); // strstr 에 따라 * 사용
    if(result==NULL)
    {
        return 0;
    }
    else
    {
        return 1;
    }

}


int main()
{
    int n;
    scanf("%d",&n);

    for(int i=1;i<10000000;i++)
    {
        if(che(i))
        {
            n=n-1;
        }
        if(n==0)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
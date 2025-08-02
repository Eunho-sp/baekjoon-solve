#include <stdio.h>
int main()
{
    int sum = 1;
    int j;
    int at;
    char a[1000000]=" ";


    scanf("%[^\n]s",&a);
    for(int i = 0;i<1000000;i++)
    {
        if(a[i] == ' ')
        {
            sum = sum + 1;
        }
    }

    if(a[0] == ' ')
    {
        sum = sum - 1;
        at = 1;
    }

    if(at != 0)
    {
        for(j=1;a[j]!='\0';j++);
    }

    if(a[j-1] == ' ')
    {
        sum = sum - 1;
    }

    printf("%d",sum);

    return 0;
}
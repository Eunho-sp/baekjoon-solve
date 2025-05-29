#include <stdio.h>
int main()
{
    int a;
    scanf("%d",&a);

    if(a%400 == 0)
    {
        printf("1");
    }
    else
    {
        if(a%4==0 && a%100 !=0) // 이 조건값에 400을 처리하는 것이 이상적
        {
            printf("1");
        }
        else
            printf("0");
    }

    return 0;
}
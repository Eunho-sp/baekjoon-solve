#include <stdio.h>
int main()
{
    int n,k,et;
    int i,j;
    int k_count=0;
    int k__count=0;
    int a[5001]={'\0'};

    scanf("%d %d",&n,&k);

    for(i=1;i<=n;i++)
    {
        a[i]=i; // n명의 원 만들기
    }
    
    printf("<");

    for(j=1;j<=n;j++)
    {
        if(a[j] != 0)
        {
            k_count++; // 제거 안된 사람 체크
        }
        if(k_count==k)
        {
            k__count++;
            if(k__count == n)
            {
                et = a[j];
                break;
            }
            printf("%d, ",a[j]); // 제거 사람 출력
            a[j]=0;
            k_count = 0;
        }
        if(j==n)
        {
            j = 0; // 무한 루프 돌리기
        }
    }

    printf("%d>",et);

}
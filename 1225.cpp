#include <stdio.h>
#include <string.h>

int main()
{
    long long int sum=0; // longlongint 일때만 답으로 나옴
    char a[10001]={0};
    char b[10001]={0};

    scanf("%s %s",&a,&b);
    for(int i=0;i<strlen(a);i++)
    {
        for(int j=0;j<strlen(b);j++)
        {
            int a_a = a[i] - '0';
            int b_b = b[j] - '0';
            sum = sum + (a_a*b_b); // 여기서 계산이 전부 int 형이라서 오버플로우 일것같음 (+왜인지는 모름.. why????)
        }
    }

    printf("%lld",sum);

    return 0;
}
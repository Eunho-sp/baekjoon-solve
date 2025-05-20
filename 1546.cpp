#include <stdio.h>
int main()
{
    int a;
    int b[1001];
    float c[1001];
    float sum=0;
    float max=0;
    float result=0;
    scanf("%d",&a); // 갯수 입력

    for(int i=0;i<a;i++)
    {
        scanf("%d",&b[i]); //값 입력
    }

    for(int j=0;j<a;j++)
    {
        if(b[j]>=max)
        {
            max = 0;
            max = b[j]; //최댓값 구하기기
        }
    }

    for(int k=0;k<a;k++)
    {
        c[k] = (b[k]/max)*100; // 변환된 점수->실수형이므로 c[]를 실수로 선언
    }

    for(int p=0;p<a;p++)
    {
        sum = sum + c[p]; // sum 또한 실수로 선언 해야함
    }

    result = sum/a; // result 도 동일

    printf("%f",result); // %f

    return 0;
}
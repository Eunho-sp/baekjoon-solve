#include <stdio.h>
int main()
{
    int a,b,c;
    int abc=0;
    int letter[12]={10,10,10,10,10,10,10,10,10,10,10,10};
    int ck_letter[12]={0};
    int j=0;
    int at = 0;

    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);

    abc = a*b*c;

    for(int i = 10;i<=1000000000;i*10)
    {
        if(abc/i == 0)
        {
            break;
        }
        letter[j] = abc % i;
        letter[j+1] = abc/i;
        abc = abc / i;
        j++;

    }

    for(int k=0;k<9;k++)
    {
        ck_letter[letter[k]]++;
    }

    for(int p = 0; p<9;p++)
    {
        printf("%d\n",ck_letter[p]);
    }
    printf("%d",ck_letter[9]);


    return 0;

}
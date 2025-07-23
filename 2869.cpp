#include <stdio.h>
#include <math.h>
int main()
{
    double a,b,v;
    int atm;
    scanf("%lf %lf %lf",&a,&b,&v);

    atm = ceil((v-a)/(a-b)) + 1;

    printf("%d",atm);

    return 0;
}
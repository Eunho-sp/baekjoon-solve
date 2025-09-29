#include <stdio.h>
#include <string.h>
int a[100001]={'\0'};

void push()
{
    int p;
    scanf("%d",&p);

    for(int i=0;i<100000;i++)
    {
        if(a[i]==0)
        {
            a[i] = p;
            break;   
        }
    }
}

void top()
{
    if(a[0]==0)
    {
        printf("-1\n");

        return;
    }
    for(int i=1;i<100000;i++)
    {
        if(a[i]==0)
        {
            printf("%d\n",a[i-1]);

            return;
        }
    }

}

void size()
{
    int sum=0;

    for(int i=0;i<100001;i++)
    {
        if(a[i]!=0)
        {
            sum++;
        }
    }
    printf("%d\n",sum);
}

void empty()
{
    int sum=0;

    for(int i=0;i<100001;i++)
    {
        if(a[i]!=0)
        {
            sum++;
        }
    }
    if(sum == 0)
    {
        printf("1\n");
    }
    else
    {
        printf("0\n");
    }
}

void pop()
{
    for(int i=100001;i>=0;i--)
    {
        if(a[i]!=0)
        {
            printf("%d\n",a[i]);
            a[i]=0;

            return;
        }
    }

    if(a[0]==0)
    {
        printf("-1\n");

        return;
    }

}

int main()
{
    int n;
    char ord[10];
    scanf("%d",&n);

    for(int i=0;i<n;i++)
    {
        scanf("%s",ord);

        if(strcmp(ord, "push")==0)
        {
            push();
        }
        else if(strcmp(ord, "top")==0)
        {
            top();
        }
        else if(strcmp(ord, "size")==0)
        {
            size();
        }
        else if(strcmp(ord, "empty")==0)
        {
            empty();
        }
        else if(strcmp(ord, "pop")==0)
        {
            pop();
        }
    }

    return 0;
}
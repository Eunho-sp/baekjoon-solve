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

void back()
{
    if(a[0]==0)
    {
        printf("-1\n");

        return;
    }
    for(int i=1;i<100001;i++)
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
    for(int i=0;i<100001;i++)
    {
        if(a[i]!=0)
        {
            printf("%d\n",a[i]);
            a[i]=0;

            break;
        }
        else
        {
            printf("-1\n");

            return;
        }
    }
    for(int j=0;j<100000;j++)
    {
        a[j]=a[j+1];
    }
    return;
}

void front()
{
    if(a[0]==0)
    {
        printf("-1\n");

        return;
    }
    else
    {
        printf("%d\n",a[0]);

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
        else if(strcmp(ord, "pop")==0)
        {
            pop();
        }
        else if(strcmp(ord, "size")==0)
        {
            size();
        }
        else if(strcmp(ord, "empty")==0)
        {
            empty();
        }
        else if(strcmp(ord, "front")==0)
        {
            front();
        }
        else if(strcmp(ord, "back")==0)
        {
            back();
        }
    }

    return 0;
}
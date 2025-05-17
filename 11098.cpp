#include <stdio.h>
#include <string.h>
int main()
{
    int n,p;
    

    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        int c=0;
        char name[21]={};
        int m_c=0;
        char s_name[21]={};
        scanf("%d",&p);
        for(int j=0;j<p;j++)
        {
            scanf("%d %s",&c, name);
            if(c>m_c)
            {
                m_c = c;
                strcpy(s_name,name);
            }
        }
        printf("%s\n",s_name);
    }
    return 0;
}
#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c;

    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        printf("%s\n",(a+b==c||b+c==a||a+c==b)?"YES":"NO");
    }
    return 0;
}

/*#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    int a,b,c;
    while(t--)
    {
        scanf("%d%d%d",&a,&b,&c);
        if(a+b==c||a+c==b||b+c==a)
        {
            printf("YES");
        }
        else
        {
            printf("NO");
        }
    }

    return 0;
}
*/

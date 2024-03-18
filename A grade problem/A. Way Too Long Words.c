//shokanta_roy
#include<stdio.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    char string[n][1000000];
    for(i=0; i< n ; i++)
    {
        scanf("%s",string[i]);
    }
    for(i=0; i< n ; i++)
    {
        int strl=strlen(string[i]);
        if(strl<=10)
        {
            printf("%s\n",string[i]);
        }
        else
        {
            int strl=strlen(string[i]);
            int strll=strl-2;
            printf("%c%d%c\n",string[i][0],strll,string[i][strl-1]);
        }
    }
    return 0;
}

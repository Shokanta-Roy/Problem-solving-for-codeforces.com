#include<stdio.h>
int main()
{
    int t,a,b,c;
    scanf("%d",&t);
    while(t!=0){
        scanf("%d%d%d",&a,&b,&c);
        if(a+b>=10||a+c>=10||c+b>=10) printf("YES");
        else{
            printf("NO");
        }
    }
    return 0;
}

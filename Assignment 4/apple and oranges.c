https://www.hackerrank.com/challenges/apple-and-orange/problem?isFullScreen=true



#include"stdio.h"
int main()
{
    int s,t,a,b,m,n;
    scanf("%d %d",&s,&t);
    scanf("%d %d",&a,&b);
    scanf("%d %d",&m,&n);
    int apple[m];
    int orange[n];
    for(int i=0;i<m;i++)
    {
        scanf("%d",&apple[i]);
    }
    for(int i=0;i<n;i++)
    {
        scanf("%d",&orange[i]);
    }
    for(int i=0;i<m;i++){
        apple[i]=apple[i]+a;
    }
    for(int i=0;i<n;i++)
    {
        orange[i]=orange[i]+b;
    }
    int c1=0,c2=0;
    for(int i=0;i<m;i++){
        if(apple[i]>=s&&apple[i]<=t)
        c1++;
    }
    for(int i=0;i<n;i++){
        if(orange[i]<=t&&orange[i]>=s)
        c2++;
    }
    printf("%d\n%d",c1,c2);
    return 0;
}

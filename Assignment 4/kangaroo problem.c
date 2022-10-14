https://www.hackerrank.com/challenges/kangaroo/problem?isFullScreen=true


#include"stdio.h"
int main()
{
    int x1,x2,v1,v2;
    scanf("%d %d %d %d",&x1,&v1,&x2,&v2);
    int a=x1;
    int b=x2;
    for(int i=1;i>=0;i++)
    {
        x1=x1+v1;
        x2=x2+v2;
        if(x1==x2){
            printf("YES");
            break;
        }
        if(a>b){
            if(x2>x1)
            {printf("NO");
            break;}
        }
        if(b>a){
            if(x1>x2)
            {printf("NO");
            break;}
        }
    }
}

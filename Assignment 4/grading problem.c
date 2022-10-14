https://www.hackerrank.com/challenges/grading/problem?isFullScreen=true



#include"stdio.h"
int main()
{
    int n;
    scanf("%d",&n);
    long ar[n];
    for(int i=0;i<n;i++)
    {
        scanf("%ld",&ar[i]);
    }
    long ar1[n];
    for(int i=0;i<n;i++)
    {
        long a=ar[i]/5;
        ar1[i]=(a+1)*5;
    }
    for(int i=0;i<n;i++){
        if(ar[i]<38)
        continue;
        if(ar1[i]-ar[i]<3)
        ar[i]=ar1[i];
    }
    for(int i=0;i<n;i++)
    {
        printf("%ld\n",ar[i]);
    }
    return 0;
}

https://www.hackerrank.com/challenges/1d-arrays-in-c/problem?isFullScreen=true


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int n,sum=0;
    scanf("%d",&n);   
    int *ptr = (int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        scanf("%d",&ptr[i]);
    }
    for(int i=0;i<n;i++)
    {
        sum=sum+ptr[i];
    }
    printf("%d",sum);
    return 0;
}

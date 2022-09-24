https://www.hackerrank.com/challenges/pointer-in-c/problem?isFullScreen=true


#include <stdio.h>

void update(int *a,int *b) {
    int c=*a;
    int d=*b;
    *a=c+d;
    if(c-d>=d-c)
    *b=c-d;
    else
    *b=d-c;  
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
} 

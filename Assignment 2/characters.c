https://www.hackerrank.com/challenges/playing-with-characters/problem?isFullScreen=true


#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    char ch,c[50],c1[100];
    scanf("%c",&ch);
    scanf("%s",c);
    scanf("\n");
    scanf("%[^\n]%*c", c1);
    printf("%c\n",ch);
    printf("%s\n",c);
    printf("%s\n",c1);
    
return 0;
}

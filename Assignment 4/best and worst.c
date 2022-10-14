https://www.hackerrank.com/challenges/breaking-best-and-worst-records/problem?isFullScreen=true


#include<iostream>
#include<climits>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    long max=INT64_MIN;
    int c1=-1;
    for(int i=0;i<n;i++)
    {
       if(ar[i]>max)
       {
           max=ar[i];
           c1++;
       } 
    }
    long min=INT64_MAX;
    int c2=-1;
    for(int i=0;i<n;i++)
    {
       if(ar[i]<min)
       {
           min=ar[i];
           c2++;
       } 
    }
    cout<<c1<<" "<<c2;
    
    return 0;
    
}

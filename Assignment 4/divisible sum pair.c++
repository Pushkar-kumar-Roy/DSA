https://www.hackerrank.com/challenges/divisible-sum-pairs/problem?isFullScreen=true



#include "iostream"
using namespace std;
int main(){
    int n,k,count=0;
    cin>>n>>k;
    int ar[n];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if((ar[i]+ar[j])%k==0)
            {
                count++;
            }
        }
    }
    cout<<count;
    return 0;
}

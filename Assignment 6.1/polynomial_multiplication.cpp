https://www.hackerrank.com/contests/dryrun01/challenges/polymul/problem



#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int t;
    cin>>t;
    for(int a=0;a<t;a++){
        int n,m;
        cin>>n>>m;
        int ar1[n],ar2[m];
        for(int i=0;i<n;i++){
            cin>>ar1[i];
        }
        for(int j=0;j<m;j++){
            cin>>ar2[j];
        }
        int ans[m+n];
        for(int i=0;i<m+n;i++){
            ans[i]=0;
        }
        int ind=0;
        for(int i=0;i<n;i++){
           for(int j=0;j<m;j++){
               ans[ind]+=(ar1[i]*ar2[j]);
               ind++;
           } 
            ind=ind-m+1;
        }
        for(int i=0;i<m+n;i++){
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}

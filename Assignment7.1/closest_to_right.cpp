https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/C



#include<iostream>
using namespace std;
int index(int n,int ar[],int target) {
    int low=0;
    int high=n-1;
    int val=n;
    while(low<=high){
        if(target>ar[n])
        return n+1;
        else{
            int mid=(low+high)/2;
            if(ar[mid]<target){
                low=mid+1;
            }
            else{
                if(val>mid)
                val=mid;
                high=mid-1;
            }
        }
    }
    return val+1;
}

int main(){
    int n,k;
    cin>>n>>k;
    int ar1[n];
    int ar2[k];
    for(int i=0;i<n;i++){
        cin>>ar1[i];
    }
    for(int i=0;i<k;i++){
        cin>>ar2[i];
    }
    for(int i=0;i<k;i++){
        int x=index(n,ar1,ar2[i]);
        cout<<x<<endl;
    }
    return 0;
}

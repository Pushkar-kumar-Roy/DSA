https://leetcode.com/problems/binary-search/


#include<stdio.h>
int binsrch(int arr[],int low,int high,int target){
    if(low<=high){
    int mid=(low+high)/2;
    if(arr[mid]==target)
    return mid;
    else if(arr[mid]<target)
    return binsrch(arr,mid+1,high,target);
    else
    return binsrch(arr,low,mid-1,target);
    }
    else
    return -1;
}
int main(){
    int n;
    scanf("%d",&n);
    int ar[n];
    for(int i=0;i<n;i++){
        scanf("%d",&ar[i]);
    }
    int t; //target
    scanf("%d",&t);
    int index;
    index=binsrch(ar,0,n-1,t);
    printf("%d",index);
    return 0;
}

https://leetcode.com/problems/arranging-coins/submissions/862809378/


int arrangeCoins(long n){
    long low=0;
    long high=n;
    long mid;
    while(1){
        if(low<=high){
         mid=(low+high)/2;
         long val=mid*(mid+1)/2;
        if(val==n)
        return mid;
        else if(val>n)
        high=mid-1;
        else{
            if(val+mid+1>n)
            return mid;
            else
            low=mid+1;
        }
        }
        else
        break;
    }
    return mid;

}

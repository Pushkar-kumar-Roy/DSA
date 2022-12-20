https://leetcode.com/problems/first-bad-version/submissions/862814136/


// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

int firstBadVersion(long n) {
    long low=1;
    long high=n;
    long mid;
    long firstbad;
    while(1){
        if(low<=high){
        mid=(low+high)/2;
        if(isBadVersion(mid)){
           firstbad=mid;
           high=mid-1;
    }
    else{
        low=mid+1;
    }

    }
    else
    break;
    }
    return firstbad;

}

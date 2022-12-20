https://leetcode.com/problems/guess-number-higher-or-lower/submissions/862795038/


/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

int guessNumber(long n){
	long low=0;
    long high=n+1;
    while(1){
        if(low<=high){
        long mid=(low+high)/2;
        if(guess(mid)==0)
        return mid;
        else if(guess(mid)==-1)
        high=mid-1;
        else 
        low=mid+1;
        }
        else
        break;
    }
    return -1;
}

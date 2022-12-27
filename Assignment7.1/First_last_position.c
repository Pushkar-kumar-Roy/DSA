https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/description/

//In this code time error is coming



class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size()-1;
        int loc1=nums.size()-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<=target){
                if(mid<loc1)
                loc1=mid;
                low=mid+1;
            }
            else{
                high=mid+1;
            }
        }
        low=0;
        high=nums.size()-1;
        int loc2=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(nums[mid]<target){
                low=mid+1;
            }
            else{
                if(loc2>mid)
                loc2=mid;
                high=mid-1;
            }
        }
        vector<int>A={loc1,loc2};
        return A;
    }
};

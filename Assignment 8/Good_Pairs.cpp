https://leetcode.com/problems/number-of-good-pairs/submissions/879454725/



class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]==nums[j]){
                    count++;
                }
            }
        }
        return count;
    }
};

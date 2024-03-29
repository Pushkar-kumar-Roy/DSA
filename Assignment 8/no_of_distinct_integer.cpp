https://leetcode.com/problems/count-number-of-distinct-integers-after-reverse-operations/



class Solution {
public:
    int countDistinctIntegers(vector<int>& nums) {
        
        set<int>st;
        for(int i=0;i<nums.size();++i){
           
            st.insert(nums[i]);
           
             int rem,rev=0;
            while(nums[i]!=0){
                 rem=nums[i]%10;
                rev=rev*10+rem;
                nums[i]/=10;
            }
      
            st.insert(rev);
        }
       
        return st.size();
    }
};

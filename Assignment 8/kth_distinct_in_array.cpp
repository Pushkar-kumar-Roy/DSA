https://leetcode.com/problems/kth-distinct-string-in-an-array/



class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        map<string, int> mp;
        for(auto it: arr) mp[it]++;
        vector<string> ans;
        for(auto it : arr)
            if(mp[it] == 1)
                ans.push_back(it);
        if(ans.size()==0) return "";
        return ans[k-1];
    }
};

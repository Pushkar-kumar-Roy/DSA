https://leetcode.com/problems/merge-sorted-array/submissions/867089136/



class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int k=m+n-1;
        int i=m-1;
        int j=n-1;
        while(k>=0){
            if(i<0){
                nums1[k]=nums2[j];
                k--;
                j--;
            }
            else if(j<0){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else if(nums1[i]>=nums2[j]){
                nums1[k]=nums1[i];
                k--;
                i--;
            }
            else{
                nums1[k]=nums2[j];
                k--;
                j--;
            }
        }
    }
};

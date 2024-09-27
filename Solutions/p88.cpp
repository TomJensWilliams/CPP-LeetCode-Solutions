// Merge Sorted Array

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int mIndex = m - 1, nIndex = n - 1, outputIndex = nums1.size() - 1;
        while(mIndex >= 0 && nIndex >= 0) {
            if(nums1[mIndex] > nums2[nIndex]){
                nums1[outputIndex--] = nums1[mIndex--];
            } else {
                nums1[outputIndex--] = nums2[nIndex--];
            }
        }
        while(nIndex >= 0) {
            nums1[outputIndex--] = nums2[nIndex--];
        }
    }
};
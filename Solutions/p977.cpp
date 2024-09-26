// Squares of a Sorted Array

class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        int left = 0, right = nums.size() - 1, count = right;
        vector<int> output(nums.size(), 0);
        while(left <= right) {
            if(nums[left] * nums[left] > nums[right] * nums[right]) {
                output[count--] = nums[left] * nums[left++];
            } else {
                output[count--] = nums[right] * nums[right--];
            }
        }
        return output;
    }
};
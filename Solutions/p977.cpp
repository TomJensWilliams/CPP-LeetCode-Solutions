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

// This does its job, but maybe I could try to see whether it would
// perform better if I assigned the results of those multiplications
// to variables and then used those variables, so as to avoid
// unnecessary re-multiplication. I could look for other improvements
// and tweaks to increase performance as well.
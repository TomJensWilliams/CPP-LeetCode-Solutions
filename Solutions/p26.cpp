// Remove Duplicates From Sorted Array

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int frontIndex = 0, backIndex = 1;
        while(backIndex < nums.size()) {
            if(nums[frontIndex] == nums[backIndex]) {
                backIndex++;
            } else {
                nums[++frontIndex] = nums[backIndex++];
            }
        }
        return frontIndex + 1;
    }
};

// A lot of the solutions seem to just be following
// the LeetCode provided solution. They are roughly
// the same solution, but use a for loop instead of
// a while loop (I prefer it my way), and they do
// the comparison nums[i] != nums[i - 1], which will
// evaluate the same way if you do it right, but my
// solution keeps the more intuative comparison.
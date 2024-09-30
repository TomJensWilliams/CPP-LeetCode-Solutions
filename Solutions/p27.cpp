// Remove Element

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int frontIndex = 0, backIndex = nums.size() - 1, temp;
        while(frontIndex <= backIndex) {
            if(nums[frontIndex] == val) {
                nums[frontIndex] = nums[backIndex--];
            } else {
                frontIndex++;
            }
        }
        return frontIndex;
    }
};

// A lot of people seem to be choosing to copy all the values
// that don't match the value over and over again. I am not sure
// why that is, but I can't imagine it is efficient.
// I think my solution is both efficient as intuative as one
// assumption given in the question is that order does not matter,
// so there is nothing better to do than to go through the array,
// find each value to be removed, and fill that index with a value
// from the back of the array, decreasing the array in size.
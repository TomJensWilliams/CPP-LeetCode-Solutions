// Max Consecutive Ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int output = 0, current = 0, index = 0;
        while (index < nums.size()) {
            if(nums[index] == 1) {
                if(++current > output) {
                    output = current;
                }
            } else {
                current = 0;
            }
            index++;
        }
    return output;
    }
};

// This does its job, but could be improved upon.
// If I did try to improve this, I would check if it
// is better to check output vs max on each 1 or each
// 0, and if there are any other small adjustments
// that I could make to increase performance.
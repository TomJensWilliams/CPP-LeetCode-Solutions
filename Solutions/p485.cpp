// Max Consecutive Ones

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int output = 0, current = 0;
        for(int index = 0; index < nums.size(); index++) {
            if(nums[index] == 1) {
                if(++current > output) {
                    output = current;
                }
            } else {
                current = 0;
            }
        }
    return output;
    }
};
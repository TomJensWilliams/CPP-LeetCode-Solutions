// Find Numbers with Even Number of Digits

class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int output = 0;
        for(int index = 0; index < nums.size(); index++) {
            bool isEven = true;
            while(nums[index] > 0) {
                nums[index] /= 10;
                isEven = !isEven;
            }
            if(isEven) {
                output++;
            }
        }
        return output;
    }
};
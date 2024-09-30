// Duplicate Zeros

class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        
        int frontPointer = 0, backPointer = 0;
        while(backPointer < arr.size()) {
            if(arr[frontPointer++] == 0) {
                backPointer += 2;
            } else {
                backPointer += 1;
            }
        }
        if(backPointer == arr.size() + 1) {
            backPointer--;
            arr[--backPointer] = arr[--frontPointer];
        }
        while(--frontPointer >= 0) {
            if(arr[frontPointer] == 0) {
                arr[--backPointer] = 0;
                arr[--backPointer] = 0;
            } else {
                arr[--backPointer] = arr[frontPointer];
            }
        }
    }
};

/*
    This one does not have the prettiest code,
    but the performance is incredible when
    compared to the other solutions on LeetCode.
    It seems like most other people are either
    using external memory and then copying the
    contents over, treating the input vector as
    a stack, or some other unnecessary nonsense.
    There might be some improvement on this,
    especially aesthetically, but it seems like
    the straightforward best answer, and most
    aren't getting it, which is odd as it is very
    usual for many of the highest rated answers
    to essentially be copy-paste-edited versions
    of each other. My best guess is that this is
    in part related to the fact that LeetCode's
    provided solutions is a slightly worse one.
*/
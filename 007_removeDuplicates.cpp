// Use two pointers 
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        // Begin at the start of the array
        int left = 1;
        int right = 1;
        while (right < nums.size()) {
            if (nums[right] != nums[right - 1]) {
                // if the number at position [right] does not equal with the number before [right - 1]
                // then the number at the position [left] will be replaced with the number at the position [right]
                nums[left] = nums[right];
                // plus left to move on to the next number
                left++;
                right++;
            } else {
                right++;
            }
        }
        return left;
    }
};

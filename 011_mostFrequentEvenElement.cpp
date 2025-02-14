class Solution {
public:
    bool isEven(int num) {
        return num % 2 == 0;
    }
    int mostFrequentEven(vector<int>& nums) {
        int count = 1;
        int maxCount = 0;
        int res = -1;

        // create a hash map with even numbers
        unordered_map<int, int> hashMapEvenNums;
        for (int num : nums) {
            if (isEven(num)) {
                hashMapEvenNums[num]++;
            }
        }

        for (auto evenNum : hashMapEvenNums) {
            // find the most frequent even number
            if (evenNum.second > maxCount) {
                maxCount = evenNum.second;
                res = evenNum.first;
            }
            // check if there is a tie, return the smallest
            if (evenNum.second == maxCount && evenNum.first < res) {
                res = evenNum.first;
            }
        }

        return res;
    }
};

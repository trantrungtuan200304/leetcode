class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //unordered_map<int, int> hashMap;
        // int count = 0;
        // int maxCount = 0;
        // int res = 0;
        // for (int num : nums) {
        //     hashMap[num]++;
        //     count = hashMap[num];
        //     if (count > maxCount) 
        //     {
        //         maxCount = count;            
        //         res = num;
        //     }
        // }
        // return res;
        int count = 0;
        int res;
        for (int num : nums) {
            if (count == 0) {
                res = num;
            }
            if (res == num) {
                count++;
            } else {
                count--;
            }
        }
        return res;
    }
};

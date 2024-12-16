class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> hash_table;

        for (int i = 0; i < nums.size(); i++) {
            int subtractResult = target - nums[i];
            // check if hash_table has subtractResult as a key
            if (hash_table.count(subtractResult)) {
                return {hash_table[subtractResult], i};
            }
            hash_table[nums[i]] = i;
        }
        return {};
    }
};

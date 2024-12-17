class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        // Bring all the elements into a hash map
        // If hash map has an element which is duplicated, it'll return true
        unordered_map<int, int> hash_map;
        for (int i = 0; i < nums.size(); i++) {
            if (hash_map.count(nums[i])) return true;
            hash_map[nums[i]] = i;
        }
        return false;

        // Count the appearance of each element
        // If element appears more than twice, it will return true
        unordered_map<int, int> hash_map;
        for (int num : nums) {
            if (hash_map[num] >= 1) return true;
            hash_map[num]++;
        }
        return false;
    }
};

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans = 0;
        // Sử dụng xor để loại bỏ các số trùng lặp
        // Ví dụ nums = {1, 2, 2}
        // 1 xor 2 xor 2 và khi xor 2 số trùng nhau thì sẽ = 0
        // kết quả là 1 xor 0
        // số nào xor với 0 thì ra chính nó
        // 1 xor ra kết quả là 1
        for (int i = 0; i < nums.size(); i++) {
            ans = ans ^ nums[i];
        }
        return ans;
    }
};

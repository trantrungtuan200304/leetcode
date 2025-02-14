class Solution {
public:
    int lengthOfLastWord(string s) {
        // Giá trị của i bằng độ dài string - 1
        int i = s.length() - 1;
        int length = 0;
        // Giảm i nếu trong string chứa khoảng trống
        while (s[i] == ' ') {
            i--;
        }
        // Tăng length nếu trong string chứa ký tự 
        while (i >= 0 && s[i] != ' ') {
            length++;
            i--;
        }

        return length;
    }
};

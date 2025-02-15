class Solution {
public:
    int mySqrt(int x) {
        if (x < 2) return x; 
        
        double left = 1;
        double right = x;

        long long mid;
        long long square;
        while (left <= right) {
            mid = left + (right - left) / 2;
            square = mid * mid;
            if (square > x) right = mid - 1;
            else if (square < x) left = mid + 1;
            else return mid;
        }

        return right;
    }
};

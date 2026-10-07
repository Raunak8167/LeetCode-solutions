class Solution {
public:
    int reverse(int x) {
        long long reversed_num = 0;         
        while (x != 0) {
            int remainder = x % 10;
            reversed_num = reversed_num * 10 + remainder;
            x /= 10;
        }
        if (reversed_num > INT_MAX || reversed_num < INT_MIN) {
            return 0;
        }
        
        return static_cast<int>(reversed_num);
    }
};

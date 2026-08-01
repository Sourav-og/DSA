class Solution {
public:
    bool isPalindrome(int num) {
        int rev_num = 0;
        int length;
        int og_num = num;

        while (num > 0) {
            length = num % 10;
            num = num / 10;
            if (rev_num > (INT_MAX - length) / 10) {
                return false;
            }
            rev_num = (rev_num * 10) + length;
        }

        if (og_num == rev_num) {
            return true;
        } else {
            return false;
        }
    }
};
class Solution {
public:
    bool isPalindrome(int x) {
        string s = to_string(x);
        int sLength = s.length();

        for (int i = 0, j = sLength - 1; i < sLength/2; i++, j--) {
            if (s[i] != s[j]) {
                return false;
            }
        }

        return true;
    }
};

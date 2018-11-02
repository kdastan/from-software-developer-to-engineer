class Solution {
public:
    string reverseString(string s) {
        string reversedString = "";
        for (int i = s.length() - 1; i >= 0; i--) {
            reversedString += s[i];
        }

        return reversedString;
    }
};

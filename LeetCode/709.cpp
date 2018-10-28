class Solution {
public:
    string toLowerCase(string str) {
        string resultString = str;
        for (int i = 0; i < str.length(); i++) {
            if (str[i] >= 'a' && str[i] <= 'z') {
                continue;
            } else {
                if (str[i] >= 'A' && str[i] <= 'Z') {
                    resultString[i] = str[i] + 32;
                }
            }
        }

        return resultString;
    }
};

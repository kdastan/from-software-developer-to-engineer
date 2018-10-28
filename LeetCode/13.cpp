class Solution {
public:
    int romanToInt(string s) {
        char romanLiterals[7] = {'I', 'V', 'X', 'L', 'C', 'D', 'M'};
        int integers[7] = {1, 5, 10, 50, 100, 500, 1000};

        int result = 0;
        for (int i = 0; i < s.length(); i++) {
            int char1Index = std::distance(romanLiterals, std::find(romanLiterals, romanLiterals + 6, s[i]));

            if (i == s.length() - 1) {
                result += integers[char1Index];
                continue;
            }

            int char2Index = std::distance(romanLiterals, std::find(romanLiterals, romanLiterals + 6, s[i + 1]));

            if (char1Index >= char2Index) {
                result += integers[char1Index];
            } else {
                result += (integers[char2Index] - integers[char1Index]);
                i++;
            }
        }

        return result;
    }
};

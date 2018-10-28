class Solution {
public:
    int numJewelsInStones(string J, string S) {
        int numberOfJewels = 0;

        for (int i = 0; i < S.length(); i++) {
            char c = S[i];
            for (int j = 0; j < J.length(); j++) {
                if (c == J[j]) {
                    numberOfJewels++;
                    break;
                }
            }
        }

        return numberOfJewels;
    }
};

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        addOne(digits, digits.size() - 1);

        return digits;
    }

    void addOne(vector<int>& digits, int pointer) {
        if (pointer < 0) {
            digits.insert(digits.begin(), 1);

            return;
        }

        if (digits[pointer] != 9) {
            digits[pointer] += 1;

            return;
        }

        digits[pointer] = 0;
        addOne(digits, pointer - 1);
    }
};

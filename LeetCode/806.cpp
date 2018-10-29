class Solution {
public:
    vector<int> numberOfLines(vector<int>& widths, string S) {
        vector<int> result;

        int numberOfCharactersInCurrentLine = 0;
        int numberOfLines = 1;

        for(int i = 0; i < S.length(); i++) {
            int width = widths[S[i] - 'a'];

            if (numberOfCharactersInCurrentLine + width <= 100) {
                numberOfCharactersInCurrentLine += width;
            } else {
                numberOfLines += 1;
                numberOfCharactersInCurrentLine = width;
            }
        }

        result.push_back(numberOfLines);
        result.push_back(numberOfCharactersInCurrentLine);

        return result;
    }
};

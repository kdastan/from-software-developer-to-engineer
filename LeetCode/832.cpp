class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& A) {

        vector<vector<int>> flippedImage;
        flippedImage.resize(A.size());
        int currentRow = 0;
        for (vector<vector<int>>::iterator i = A.begin(); i != A.end(); i++) {
            for (vector<int>::reverse_iterator j = i->rbegin(); j != i->rend(); j++) {
                flippedImage[currentRow].push_back(*j == 0 ? 1 : 0);
            }

            currentRow++;
        }

        return flippedImage;
    }
};

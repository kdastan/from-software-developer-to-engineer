class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& A) {
        vector<int> resultVector;
        for(int i = 0; i < A.size(); i++) {
            if (!(A[i] % 2)) {
                resultVector.push_back(A[i]);
            }
        }

        for(int i = 0; i < A.size(); i++) {
            if (A[i] % 2) {
                resultVector.push_back(A[i]);
            }
        }

        return resultVector;
    }
};

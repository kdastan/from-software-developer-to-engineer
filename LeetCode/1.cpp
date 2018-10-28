class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> resultingVector;
        for(int i = 0; i < nums.size(); i++) {
            int a = nums[i];
            for (int j = i + 1; j < nums.size(); j++) {
                if (target == a + nums[j]) {
                    resultingVector.push_back(i);
                    resultingVector.push_back(j);

                    return resultingVector;
                }
            }
        }
    }
};

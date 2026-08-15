class Solution {
public:
    int findMaxLength(vector<int>& nums) {

        unordered_map<int, int> mpp;

        int sum = 0, diff = 0;

        mpp[0] = -1;

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 0)
                sum++;
            else
                sum--;
            if (mpp.contains(sum)) {
                diff = max(diff, i - mpp[sum]);
                continue;
            }
            mpp[sum] = i;
        }

        return diff;
    }
};
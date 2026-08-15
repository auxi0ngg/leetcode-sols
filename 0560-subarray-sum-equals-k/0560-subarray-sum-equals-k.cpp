class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {

        map<int, int> mpp;

        mpp[0] = 1;

        int sum = 0, rem = 0, count = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];
            rem = sum - k;
            count += mpp[rem];
            mpp[sum] += 1;
        }

        return count;
    }
};
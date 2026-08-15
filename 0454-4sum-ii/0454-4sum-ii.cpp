class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {

        int maxCount = 0, n = nums1.size();

        unordered_map<int,int> mpp;

        for(int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                mpp[nums1[i]+nums2[j]]++;
            }
        }

        for(int i = 0; i<n; i++){
            for (int j = 0; j<n; j++){
                maxCount = maxCount + mpp[0 - (nums3[i]+nums4[j])];
            }
        }

        return maxCount;
        
    }
};
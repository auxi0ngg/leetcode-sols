class Solution {
public:
    int pivotIndex(vector<int>& nums) {

        vector<int> pivotArr;
        int rSum, lSum = 0;

        for(auto num:nums){
            rSum += num;
        }

        for(int i = 0; i<nums.size(); lSum+=nums[i++]){
            rSum-=nums[i];
            if(rSum==lSum){
                return i;
            }
        }
        return -1;
        
    }
};
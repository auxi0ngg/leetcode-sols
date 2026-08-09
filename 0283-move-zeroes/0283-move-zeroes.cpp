class Solution {
public:
    void moveZeroes(vector<int>& nums) {

        if(nums.size()<2) 
            return;

        int l = 0;
        int r = 1;

        while(r<nums.size() && l<r){
            if(nums[l]!=0){
                r++;
                l++;
                continue;
            }
            if(nums[l]==0 && nums[r]==0){
                r++;
                continue;
            }
            if(nums[l]==0 && nums[r]!=0){
                int temp = nums[r];
                nums[r] = 0;
                nums[l] = temp;
                r++;
                l++;
                continue;
            }

        }

        return;
    }
};
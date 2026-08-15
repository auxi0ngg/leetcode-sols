class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int l = 0, r = k-1, n = nums.size(), sum = 0, maxSum = 0;

        for(int i = l; i<=r; i++){
            sum = sum + nums[i];
        }

        maxSum = sum;

        while(r<n-1){
            sum-=nums[l];
            l++;
            r++;
            sum+=nums[r];
            maxSum = max(sum, maxSum);
        }

        return (double)maxSum/k;
        
    }
};
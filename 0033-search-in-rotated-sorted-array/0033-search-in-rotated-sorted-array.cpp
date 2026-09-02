class Solution {
public:
    int search(vector<int>& nums, int target) {

        int start = 0, end = nums.size()-1, mid = 0;
        while(start<=end){
            mid = start + (end-start)/2;
            if (nums[mid]==target)  return mid;
            if(nums[mid]==nums[end] && nums[mid]==nums[start]){
                start++;
                end--;
                continue;
            }
            if(nums[mid]>=nums[start]){
                if(nums[start] <= target && target<=nums[mid])  end = mid -1;
                else    start = mid+1;
            }
            else{
                if(nums[end] >=target && nums[mid]<=target)  start = mid +1;
                else    end = mid-1;
            }
        }

        return -1;
        
    }
};
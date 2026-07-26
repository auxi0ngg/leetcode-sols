class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        if(nums.size() == 0)    return 0;
        int n = nums.size();
        
        unordered_set<int> arr(nums.begin(), nums.end());

        int len = 1, maxi = 1, cur = 0;

        for(auto it:arr){

            if(arr.find(it-1) == arr.end()){
                cur = it;
                len = 1;
                while(arr.find(cur+1)!=arr.end()){
                cur++;
                len++;
            }
            }

            

            maxi = max(maxi, len);    
    
        }

        return maxi;

    }
};
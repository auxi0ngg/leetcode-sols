class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {

        int l = 0, r = arr.size()-1, sum = 0;

        while(l<r){
            sum = arr[l]+ arr[r];
            if(target>sum){
                l++;
            }
            if(target<sum){
                r--;
            }
            if(target==sum)
                break;
        }
        return {l+1,r+1};
    }
};
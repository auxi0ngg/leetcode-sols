class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> mp;

        for(auto it: nums){
            mp[it]++;
        }

        vector<vector<int>> bucket(nums.size()+1);

        for(auto it:mp){
            bucket[it.second].push_back(it.first);
        }

        vector<int> result;
        for(int i = nums.size();i>=0;i--){
            if(bucket[i].size()==0) continue;
            while(bucket[i].size() > 0 && k > 0){
                result.push_back(bucket[i].back());
                bucket[i].pop_back();
                k--;
            }
        }
        return result;
    }
};
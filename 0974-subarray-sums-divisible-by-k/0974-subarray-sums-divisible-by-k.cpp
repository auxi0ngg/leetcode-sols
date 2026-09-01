class Solution {
public:
    int subarraysDivByK(std::vector<int>& nums, int k) {
     
     int preSum = 0, mod, ans=0;
     unordered_map<int, int> remFreq;

     remFreq[0] = 1;


     for(auto num:nums){
        preSum += num;
        
        mod = preSum % k;

        if(mod<0){
         mod+=k;   
        }

        if(remFreq.find(mod)!=remFreq.end()){
            ans+=remFreq[mod];
            remFreq[mod]++;
        }
        else{
            remFreq[mod] = 1;
        }
     }

     return ans;

    }
};
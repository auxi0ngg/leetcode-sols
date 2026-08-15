class Solution {
public:
    int characterReplacement(string s, int k) {
        
        unordered_map<char, int> mpp;

        int l = 0, count = 0, maxCount = 0;

        for(int i = 0;i<s.size();i++){
            mpp[s[i]]++;
            count = max(mpp[s[i]], count);
            while(k < ((i - l + 1) - count)){
                mpp[s[l]]--;
                l++;
                // count = max(mpp[s[i]], count);
            }

            maxCount = max(maxCount, i-l+1);
        }

        return maxCount;

    }
};
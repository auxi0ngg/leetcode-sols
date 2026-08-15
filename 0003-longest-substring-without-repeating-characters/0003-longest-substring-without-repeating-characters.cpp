class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int n = s.size();
        if (n<=1)   return n;

        vector<int> hash(256, -1);

        int len = -1, maxLen = 0;

        int l = 0., r = 0;

        while(r<n){
            l = max(l, hash[s[r]]+1);
            maxLen = max(maxLen, r-l+1);
            hash[s[r]] = r;
            r++;
        }
        
        return maxLen;

        
    }
};
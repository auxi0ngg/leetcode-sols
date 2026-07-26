class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        map<string, vector<string>> mpp;

        for(auto s : strs){
            vector<int> count(26);

            for(auto c:s){
                count[c - 'a'] += 1;
            }

            string a = "";
            for(auto i:count){
                a+='#';
                a+=i;
            }

            if(mpp.find(a)==mpp.end()){
                mpp[a] =  vector<string>();
            }

            mpp[a].push_back(s);

        }

        vector<vector<string>> ans;
        for(auto &[k, g] : mpp){
            ans.push_back(g);
        }

        return ans;

        
    }
};
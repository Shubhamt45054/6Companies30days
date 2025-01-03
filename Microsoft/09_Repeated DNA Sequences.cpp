// https://leetcode.com/problems/repeated-dna-sequences/description/

class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        string str;
        int j=0;
        int i=0;
        int n=s.size();
        map<string,int> mp;
        for(int i=0;i<n-9;i++){
            // str.push_back(s[i]);
            // if(i-j==9){
            //     mp[str]++;
            //     str.erase(0,1);
            //     j++;
            // }
            mp[s.substr(i,10)]++;
        }
        vector<string> ans;
        for(auto it:mp){
            if(it.second>1){
                ans.push_back(it.first);
            }
        }
        return ans;
    }
};

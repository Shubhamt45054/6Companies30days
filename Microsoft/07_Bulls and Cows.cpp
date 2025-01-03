//  https://leetcode.com/problems/bulls-and-cows/description/


class Solution {
public:
    string getHint(string s, string g) {
        int x=0,y=0;
        int n=s.size();
        map<char,int> mp;
        for(int i=0;i<n;i++){
            if(s[i]==g[i]){
                x++;
                s[i]='X';
            }
            else mp[g[i]]++;
        }
        for(int i=0;i<n;i++){
            if(mp[s[i]]>0){
                mp[s[i]]--;
                y++;
            }
        }
        string ans="";
        string xx=to_string(x);
        string yy=to_string(y);
        ans+=xx;
        ans.push_back('A');
        ans+=yy;
        ans.push_back('B');
        return ans;
    }
};

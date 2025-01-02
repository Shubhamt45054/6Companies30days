class Solution {
public:
    static bool cmp(vector<int>& a,vector<int>& b){
        if(a[0]==b[0]) return a[1]>b[1];
        else return a[0]<b[0];
    }

    int maxEnvelopes(vector<vector<int>>& arr) {
        int n=arr.size();
        sort(arr.begin(),arr.end(),cmp);
        vector<int> ans;
        for(int i=0;i<n;i++){
            int ele=arr[i][1];
            // cout<<arr[i][0]<<" "<<arr[i][1]<<endl;
            int it=lower_bound(ans.begin(),ans.end(),ele)-ans.begin();

            if(it>=ans.size()) ans.push_back(ele);
            else ans[it]=ele;
        }

        return ans.size();
    }
};

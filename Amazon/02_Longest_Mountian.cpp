https://leetcode.com/problems/longest-mountain-in-array/description/

class Solution {
public:

    int longestMountain(vector<int>& arr) {
         int n=arr.size();
    vector<int> left(n,0);
    vector<int> right(n,0);
    for(int i=1;i<n;i++){
        if(arr[i]>arr[i-1]){
            left[i]=1+left[i-1];
        }
        else left[i]=0;
    }
    for(int i=n-2;i>=0;i--){
        if(arr[i]>arr[i+1]){
            right[i]=1+right[i+1];
        }
        else right[i]=0;
    }
    int ans=0;
    for(int i=1;i<n-1;i++){
        if(right[i]!=0 && left[i]!=0)
        ans=max(ans,right[i]+left[i]+1);
    }

    return ans>=3?ans:0;
    }
};

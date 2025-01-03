//  https://leetcode.com/problems/count-number-of-nice-subarrays/description/

// method -1 number of even behind odd 
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int ans=0;
        int cnt=0;
        int n=nums.size();
        int j=0;
        // number of even numbers behind odd
        map<int,int> mp;
        int eve=0;
        for(int i=0;i<n;i++){
            mp[i]=eve;
            if(nums[i]%2!=0){
                cnt++;
                eve=0;
            }
            else eve++;

            while(cnt>k || (j<i && nums[j]%2==0)){
                if(nums[j]%2!=0) cnt--;
                j++;
            }

            if(cnt==k) ans+=mp[j]+1;
        }
        return ans;
    }
};

// Method - 2 [odd-k] approack
class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        int odd=0;
        int n=nums.size();
        map<int,int> mp;
        mp[0]=1;
        int ans=0;
        for(int i=0;i<n;i++){
            if(nums[i]%2!=0) odd++;
            ans+=mp[odd-k];
            mp[odd]++;
        }
        return ans;
    }
};

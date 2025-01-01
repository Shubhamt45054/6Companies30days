https://leetcode.com/problems/find-the-winner-of-the-circular-game/

Method - 1 
  
int findTheWinner(int n, int k) {
        vector<int> arr;
        for(int i=1;i<=n;i++){
            arr.push_back(i);
        }
        int s=0;
        while(arr.size()>1){
            int ss=arr.size();
            s=(s+k-1)%ss;
            vector<int> temp;
            // cout<<arr[s]<<endl;
            for(int i=0;i<ss;i++){
                if(i!=s){
                    temp.push_back(arr[i]);
                }
            }
            arr=temp;
        }
        return arr[0];
    }

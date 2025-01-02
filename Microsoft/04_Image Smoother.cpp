class Solution {
public:
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        int n=img.size();
        int m=img[0].size();
        vector<vector<int>> arr(n,vector<int>(m,0));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                int x[3]={-1,0,1};
                int y[3]={-1,0,1};
                int cnt=0;
                int ff=0;
                for(auto xx:x){
                    for(auto yy:y){
                        int a=i+xx;
                        int b=j+yy;
                        if(a>=0 && b>=0 && a<n && b<m){
                            cnt+=(img[a][b]);
                            ff++;
                        }
                    }
                }
                arr[i][j]=(cnt/ff);
            }
        }
        return arr;
    }
};

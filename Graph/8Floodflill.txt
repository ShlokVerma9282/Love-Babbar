class Solution {
public:
    void dfs(int row,int col,int inclr,int clr,vector<vector<int>>& ans,vector<vector<int>>& image,int delrow[],int delcol[]){
        ans[row][col]=clr;
        int n=image.size();
        int m=image[0].size();
        for(int i=0;i<4;i++){
            int nrow=row+delrow[i];
            int ncol=col+delcol[i];
            if((nrow>=0 && nrow<n) && (ncol>=0 && ncol<m) && (ans[nrow][ncol]!=clr) && (image[nrow][ncol]==inclr)){
                dfs(nrow,ncol,inclr,clr,ans,image,delrow,delcol);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int clr) {
        int inclr = image[sr][sc];
        vector<vector<int>>ans = image;
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        dfs(sr,sc,inclr,clr,ans,image,delrow,delcol);
        return ans;
    }
};
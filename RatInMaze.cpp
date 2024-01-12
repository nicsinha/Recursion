#include<bits/stdc++.h>
using namespace std;


void findAllPath(int i,int j, vector<vector<int>> &maze,vector<string> &result,int m,int n
                ,string path,int di[],int dj[],vector<vector<int>> &vis)
{
    if(i == m-1 && j == n-1)
    {
        cout<<path<<endl;
        result.push_back(path);
        return;
    }
    string dir = "DLRU";

    for(int k=0;k<4;k++)
    {
        int nexti = di[k] + i;
        int nextj = dj[k] + j;
        if(nexti>=0 && nextj>=0 && nexti<m && nextj<n && !vis[nexti][nextj] && maze[nexti][nextj] == 1)
        {
            vis[i][j] == 1;
            findAllPath(nexti,nextj,maze,result,m,n,path+dir[k],di,dj,vis);
            vis[i][j] == 0;
        }
    }
}
vector<string> solve(vector<vector<int>> &maze)
{
   vector<string> result;
   int m = maze.size();
   int n = maze[0].size();
   vector<vector<int>> vis(m,vector<int>(n,0));
   int di[] = {1,0,0,-1};
   int dj[] = {0,-1,1,0};
   string path = "";
   findAllPath(0,0,maze,result,m,n,path,di,dj,vis);

//    for(int i=0;i<result.size();i++)
//    {
//     cout<<result[i]<<endl;
//    }
   return result;
}
int main()
{
     vector<vector<int>> maze {
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
     };
     vector<string> finalresult = solve(maze);
}
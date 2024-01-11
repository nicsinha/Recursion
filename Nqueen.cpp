#include<bits/stdc++.h>
using namespace std;

bool isSafe(int row,int col,vector<string> board,int n)
{
    int temprow = row;
    int tempcol = col;

    while(row>=0 && col>=0)
    {
        if(board[row][col] == 'Q')
         return false;
        row --;
        col --;
    }

    row = temprow;
    col = tempcol;

    while(col>=0)
    {
        if(board[row][col] == 'Q')
        {
            return false;
        }
        col--;
    }
    row = temprow;
    col = tempcol;

    while(row<n && col>=0)
    {
        if(board[row][col] == 'Q')
         return false;
        row ++;
        col --;
    }
  return true;

}
void solve(vector<string> &board,int n,int col,vector<vector<string>> &ans)
{
    if(col == n)
    {
        ans.push_back(board);
        return;
    }

    for(int row = 0;row<n;row++)
    {
        if(isSafe(row,col,board,n))
        {
            board[row][col] = 'Q';
            solve(board,n,col+1,ans);
            board[row][col] = '.';
        }
    }
}
int main()
{
    int n = 4;
    vector<vector<string>> ans;
    vector<string> board(n);
    string s(n,'.');
    for(int i=0;i<n;i++)
    {
        board[i] = s;
    }

    solve(board,n,0,ans);

    int len = ans.size();

    for(int i=0;i<len;i++)
    {
        int l1 = ans[i].size();

        for(int j=0;j<l1;j++)
        {
            cout<<ans[i][j]<<endl;
        }
        cout<<endl;
    }

}
#include<bits/stdc++.h>
using namespace std;

void findUniqueSubset(int a[],int i,vector<int> ans,vector<vector<int>> &result,int n)
{
    //result.push_back(ans);
    for(int j=i;j<n;j++)
    {
       if(i!=j && a[j]==a[j-1]) continue;
       ans.push_back(a[j]);
       findUniqueSubset(a,j+1,ans,result,n);
       result.push_back(ans);
       ans.pop_back(); 
    }
}

int main()
{
    int a[] = {1,2,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> ans;
    vector<vector<int>> result;
    findUniqueSubset(a,0,ans,result,n);

    int s = result.size();
    for(int k=0;k<s;k++)
    {
        int is = result[k].size();
        for(int l=0;l<is;l++)
        cout<<result[k][l]<<" ";
        cout<<endl;
    }


    return 0;
}
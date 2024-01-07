#include<bits/stdc++.h>
using namespace std;

void findAllPremutation(int a[],vector<int> ans,vector<vector<int>> &result,int n,vector<int> freq)
{
    if(ans.size() == n)
    {
        result.push_back(ans);
        return;
    }
    for(int i=0;i<n;i++)
    {
        if(freq[i]!=1)
        {
            ans.push_back(a[i]);
            freq[i] = 1;
            findAllPremutation(a,ans,result,n,freq);
            freq[i] = 0;
            ans.pop_back();
        }
    }
}
int main()
{
    int a[] = {1,2,3};
    int n = sizeof(a)/sizeof(a[0]);
    vector<int> ans;
    vector<vector<int>> result;
    vector<int> freq(n,0);
    findAllPremutation(a,ans,result,n,freq);
    

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
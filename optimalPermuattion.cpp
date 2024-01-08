#include<bits/stdc++.h>
using namespace std;

void findAllPremutation(vector<int> &a,vector<vector<int>> &result,int n,int index)
{
    if(index == n)
    {
        result.push_back(a);
        return;
    }
    for(int i=index;i<n;i++)
    {
        swap(a[i],a[index]);
        findAllPremutation(a,result,n,index+1);
        swap(a[i],a[index]);
    }
}
int main()
{
    vector<int> a{ 1, 2, 3};
    int n = a.size();
    vector<int> ans;
    vector<vector<int>> result;
    vector<int> freq(n,0);
    findAllPremutation(a,result,n,0);
    

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
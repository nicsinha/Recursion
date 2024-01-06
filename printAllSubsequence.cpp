#include<bits/stdc++.h>
using namespace std;
 
 // function to print subsequence - 2^n subsequence
void printSeq(int a[],int i,int n, vector<int> ans)
{
    if(i == n)
    {
        for(int k=0;k<ans.size();k++)
            cout<<ans[k] <<" ";
        cout<<endl;
        return;
    }
    ans.push_back(a[i]);
    printSeq(a,i+1,n,ans);
    ans.pop_back();
    printSeq(a,i+1,n,ans);
}
int main()
{
    int a[] = {3,2,1};
    vector<int> ans;
    printSeq(a,0,3,ans);
    return 0;
}
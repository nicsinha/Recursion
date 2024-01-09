#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(string a,int start,int end)
{
    while(start <= end)
    {
        if(a[start++] != a[end--])
            return false;
    }
    return true;
}
void findAllPalindrome(string a,int index,vector<string> ans,vector<vector<string>> &result)
{
    if(index == a.size())
    {
        result.push_back(ans);
        return;
    }
    for(int i=index;i<a.size();++i)
    {
       
       if(isPalindrome(a,index,i))
       {
            ans.push_back(a.substr(index,i-index +1));
            findAllPalindrome(a,index+1,ans,result);
            ans.pop_back();
       }
    }
}
int main()
{
    string a = "aabb";
    vector<string> ans;
    vector<vector<string>> result;
    findAllPalindrome(a,0,ans,result);
    

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
#include<bits/stdc++.h>
using namespace std;

void combination(int a[],int i,int target,vector<int> ans,int l)
{
    if(i == l)
    {
        if(target == 0)
        {
            for(auto i:ans)
            {
                cout<<i<<" ";
            }
            cout<<endl;
        }
        return;
    }
    
    if(a[i] <= target)
    {
        ans.push_back(a[i]);
        combination(a,i,target-a[i],ans,l);
        ans.pop_back();
    }
    combination(a,i+1,target,ans,l);
    
}
int main()
{

   // int a[] = {2,3,6,7};
   int a[] = {5,1,3};
    vector<int> ans;
    combination(a,0,10,ans,4);
    return 0;
}
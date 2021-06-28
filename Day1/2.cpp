#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main()
{
    int val,c=0;
    cin>>val;
    vector<int> nums={1,2,2,3,3,3,4,5,3,5,3};
    for(int i=0;i<nums.size();i++)
    {
        if(nums[i]!=val)
            c++;
        else
            nums[i]=INT_MAX;
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<c;i++)
        cout<<nums[i];
}
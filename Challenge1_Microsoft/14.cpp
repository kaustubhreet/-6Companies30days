#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//very simple question: here we have to find min number from nums vector which can divide overall numsDivide vector otherwise return -1 as ans
//very simple trick used to find ans using gcd
int minOperations(vector<int>& nums, vector<int>& numsDivide) {
        int ans=0;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        sort(numsDivide.begin(),numsDivide.end());

int common=numsDivide[0];
        for(int i=1;i<n;i++){
           common=__gcd(common,numsDivide[i]);
        }
        
if(common<nums[0]) return -1;

for(int i=0;i<n;i++){
    if(common%nums[i]==0){
        return ans;
    }
    ans++;
}
        return -1;
    }

int main(){
    vector<int>nums={2,2,3,4,3};
    vector<int>numsDivide={9,6,9,3,15};
    cout<<minOperations(nums,numsDivide);
    return 0;
}
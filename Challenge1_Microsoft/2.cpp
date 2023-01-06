//combination sum -3 problem of leetcode which consist of backtracking


#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void help(vector<vector<int>>&ans,vector<int>&curr,int k,int n,int st){
    if(k==0 && n==0){
        ans.push_back(curr);
        return;
    }

    for(int i=st;i<=9;i++){
        curr.push_back(i);
        help(ans,curr,k-1,n-i,i+1);
        curr.pop_back();
    }

}
    vector<vector<int>> combinationSum3(int k, int n) {
         //to store ans;
       vector<vector<int>>ans;
       vector<int>curr;
        if(n==0)
        return ans;

        if(k>=n)
        return ans;
        if(k==1 or n==1)
        return ans;
       
      help(ans,curr,k,n,1);
      return ans; 
    }

    int main(){
        int k=3,n=9;
       vector<vector<int>>ans;
       ans=combinationSum3(k,n);
       for(auto it:ans){
        for(auto x:it){
            cout<<x<<" ";
        }
        cout<<endl;
       } 
        return 0;
    }
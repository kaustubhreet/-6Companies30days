//most profitable path in a tree leetcode 2467 problem and day 2nd of #ReviseWithArsh 2023
#include <bits/stdc++.h>
#include <iostream>
using namespace std;

 int mostProfitablePath(vector<vector<int>>& edges, int bob, vector<int>& amount) {
        
}


int main(){
    vector<vector<int>>edges{
        {0,1},{1,2},{1,3},{3,4}
    };
    int bob=3;
    vector<int>amount{-2,4,2,-4,6};
    cout<<mostProfitablePath(edges,bob,amount);
    return 0;
}
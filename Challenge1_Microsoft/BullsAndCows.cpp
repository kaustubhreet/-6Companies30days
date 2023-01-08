//3rd question of challenge
//leetcode 299 problem

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

//function to find 
    string getHint(string secret, string guess) {
        int n=secret.size();
        vector<int>sec(10,0); //stores the count of secret
        vector<int>gue(10,0);  // stores the guess number

        int bull=0,cows=0;
        for(int i=0;i<n;i++){
            if(secret[i]==guess[i]){
                bull++;
            }
            else{
                sec[secret[i]-'0']++;
                gue[guess[i]-'0']++;
            }
        }
        //take min from both sec and gue
        for(int i=0;i<10;i++){
            cows+=min(sec[i],gue[i]);
        }

        cout<<bull<<" "<<cows;

        string ans="";
        ans+=to_string(bull);
        ans+="A";
        ans+=to_string(cows);
        ans+="B";

        return ans;
    }

    int main(){
        string s="1807",g="7801";
        cout<<getHint(s,g);
        return 0;
    }
#include<bits/stdc++.h>
#include<iostream>
using namespace std;


int sol(int i , vector<int> &wt ,vector<int> &pft , int cap , int wtg , vector<vector<int>> &dp)
{
    if(i < 0  || cap == 0) return 0;
    if (dp[i][wtg] != -1) return dp[i][wtg];

    int nt = sol(i-1,wt,pft , cap , wtg , dp);
    int tk = INT_MIN ;
    if(wt[i] <= wtg)
    {
        tk = pft[i] + sol(i-1,wt,pft , cap , wtg - wt[i] ,dp);    
    }
    return dp[i][wtg] = max (tk,nt); 
}
int main()
{
    vector<int> wt = {1,3,5,7},pft = {1,3,5,7};
    int n = wt.size();
    int cap = 14;
    vector<vector<int>> dp(n,vector<int> ( cap + 1, -1));

    int ans = sol( n-1,wt,pft , cap , cap  ,dp);
    if(cap == ans) cout<<"satisfied"<<endl;
}
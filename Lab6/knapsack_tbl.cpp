#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<int> wt = {1,3,5,7} , pft = {1,3,5,7};
    int cap = 14;
    int n = wt.size();
    vector<vector<int>> dp(n , vector<int> (cap +1 , -1));

        for(int i = 0;i<n;i++) dp[i][0] = 0;
    for(int i = 0;i<=cap;i++) if(wt[i]<=cap) dp[0][wt[i]] = pft[i];

    for(int i = 1;i<=n ;i++)
    {
        for(int j = 1;j<=cap ;j++)
        {
            int ans;
            if(wt[i] <= j) ans = pft[i] + dp[i-1][j - wt[i]];
            else 
        }
    }
}
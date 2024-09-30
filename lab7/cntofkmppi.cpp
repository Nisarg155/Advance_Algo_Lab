// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
    string p = " aabaa";
    int n = p.size();
    vector<int> pi(n,0);
    
    int k = 0 ,cnt = 0;
    for(int q = 2;q<n;q++)
    {
        bool t = p[k+1] != p[q];
        cnt++;
        while(k>0 && t)
        {
            cnt++;
            k = pi[k];
        }
        if(!t) k++;
        pi[q] = k;
    }
    
    for(auto it : pi)
    {
        cout<<it<<" ";
    }
    cout<<endl<<cnt;

    return 0;
}
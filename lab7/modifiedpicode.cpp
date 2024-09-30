// Online C++ compiler to run C++ program online
#include <iostream>
#include<bits/stdc++.h>

using namespace std;
int main() {
    // Write C++ code here
    string p = " acac";
    string t = "acacacacac";
    int m = t.size();
    int n = p.size();
    vector<int> pi(n-1,0);
    
    int k = 0 ,cnt = 0,q = 2;
    while(q< n)
    {
        cnt++;
        if(p[k+1] == p[q])
        {
            k++;
            pi[q-1] = k;
            q++;
        }
        else{
            if(k>0)
            {
                k = pi[k-1];
            }
            else{
                pi[q-1] = k;
                q++;
            }
        }
    }

p = "aaaaa";
n = p.size();
cnt = 0;
q = 0;
for(int a =0; a<m ;a++)
{
    bool te = p[q] != t[a];
    cnt++;
    while(q > 0 && te )
    {
        cnt++;
        q = pi[q-1];
    }
    if(!te)
    {
        q++;
    }
    if(q == n)
    {
        cout<<(a-n+1)<<" ";
        q = pi[q-1];
    }
}
cout<<endl;
cout<<cnt;
    
   

    return 0;
}
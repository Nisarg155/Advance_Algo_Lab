#include<bits/stdc++.h>

using namespace std;


int main ()
{
    unsigned long long n;
    int x , p ;

    cin>>n>>x>>p;
    
    int res = 1;
    x = x%p; // if x >= p

    while(n>0)
    {
        if(n & 1) 
        {
            res = (res*x)%p;
        } 

        x = ((x%p)*(x%p))%p;
        n = n>>1;
    }

    cout<<res<<endl;
}
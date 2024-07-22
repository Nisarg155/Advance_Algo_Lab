#include <bits/stdc++.h>
#include <iostream>


using namespace std;

int gcd(int a , int b)
{
    if(b == 0) return a;

    if(a > b) return gcd(b,a%b);
    else return gcd(b,a);
}


int main()
{
    int ans = gcd(3,2);
    cout<<ans<<endl;
    return 0;
}
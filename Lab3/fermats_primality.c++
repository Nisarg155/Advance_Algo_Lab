#include <bits/stdc++.h>

#define uul unsigned long long int
using namespace std;

uul gcd(uul a, uul b)
{
    while(b != 0)
    {
        uul r = a%b;
        a = b;
        b = r;
    }

    return a;
}

uul power(uul base , uul pwr , uul modulo )
{
    uul res = 1;
    base = base%modulo; // if x >= modulo

    while(pwr>0)
    {
        if(pwr & 1) 
        {
            res = (res*base)%modulo;
        } 

        base = ((base%modulo)*(base%modulo))%modulo;
        pwr = pwr>>1;
    }

    return res;
} 

bool isprime(uul n)
{
    if(n<= 1 || n== 4)
    return false;

    if(n <= 3) return true;
    int k = 100;

    while(k)
    {
        int a = rand() %(n-3) + 2;

        if(gcd(n,a) != 1) return false;
        // composite 

        if(power(a,n-1,n) != 1) return false;
        // composite 
        k--;

    }

    return true;


}

int main()
{
    srand(time(0));
    uul n ;
    cin>>n;
    cout<<isprime(n)<<endl;
}
#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n = 10000;
    vector<int> v(n,0);
    for(int i = 0;i<n;i++) v[i] = i;

    for(int i = n-1 ;i>0;i--)
    {
        int j = rand()%(i+1);
        swap(v[i],v[j]);
    }
    // shuffle(arr, arr + n,
    //         default_random_engine(seed)); use this to shuffel

    int best = 0;
    int ttl = 0;
    for(int i = 0;i<n ;i++)
    {
        if(best < v[i]) 
        {
            best = v[i];
            ttl++;
        }
    }

    cout<<ttl<<endl;

}

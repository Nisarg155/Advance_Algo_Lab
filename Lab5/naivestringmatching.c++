#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaapaaaaaaaaaaaaa";
    string s2 = "aaaaa";
    int cnt = 0;

    int n1 = s1.size() , n2 = s2.size();
    for(int i = 0;i<=n1 - n2 ; i++)
    {
        int  j = 0;
        while( j< n2 && s1[j + i] == s2[j])
        {
            cnt++;
            j++;
        }
        if(j == n2) cout<<"shift occurs at "<<i<<endl;
    }
    cout<<(n1 - n2 + 1)*n2<<endl;
    cout<<cnt<<endl;
    return 0;
}
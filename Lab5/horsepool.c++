#include<bits/stdc++.h>

using namespace std;

int main()
{
    string s1 = "hello my name is name what is your name";
    string s2 = "name";
    int n1 = s1.size() , n2 = s2.size();
    map<char,int> shift;
    for(int i = 0; i < n2 - 1 ;i++)
    {
        shift[s2[i]] = n2 - 1 - i;
    }
    for(auto it : shift) cout<<it.first<<" "<<it.second<<endl;
    int j = 0;
    while(j + n2 <= n1)
    {
        if(s2[n2 - 1] == s1[j + n2 -1])
        {
            int i = n2 - 2;
            while( i>= 0 && (s2[i] == s1[j + i]) )
            {

                i--;
            }
            if(i == -1) cout<<"the index starts at "<<j<<endl;
        }
        if(shift[s1[j+n2-1]] != 0 ) j = shift[s1[j+n2-1]] + j;
            else j += n2;
    }
}
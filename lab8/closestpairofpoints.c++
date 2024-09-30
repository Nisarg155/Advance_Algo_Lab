#include<bits/stdc++.h>

using namespace std;

int main()
{
    vector<pair<int,int>> points = {
        {2,2},{4,4},{5,6}
    };
    double mn = 1e5;

    int n = points.size();

    for(int i = 0;i<n-1 ;i++)
    {
        for(int j = i+1 ; j<n ;j++)
        {
            double dis = sqrt(   pow((points[i].first - points[j].first),2) + pow((points[i].second - points[j].second),2));
            mn = min(dis,mn);
            cout<<dis<<endl;
        }

    }

    cout<<"answer :- "<<mn<<endl;

}
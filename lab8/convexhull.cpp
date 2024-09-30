#include<bits/stdc++.h>

using namespace std;

int Direction (pair<int,int> A, pair<int,int> B , pair<int,int> C)
{
    return (C.first - A.first)* (B.second - A.second) - (B.first - A.first ) * (C.second - A.second);
}

void convex_hull(vector<pair<int,int>> &points )
{
    int n = points.size();
    vector<pair<int,int>> hull;
    int left = 0;

    // finding the left most point 
    for(int i = 0;i<n;i++)
    {
        if(points[i].first < points[left].first) 
        left = i;
    }

    int p = left, q ;

    do {
        hull.push_back(points[p]);

        q = (p+1)%n;

        for(int i = 0;i<n ;i++)
        {
            if(Direction(points[p],points[i],points[q]) < 0 )
            {
                q = i;
            }
        }
        p =q;
    }while(p != left);

    for(auto it : hull ) cout<<it.first<<" "<<it.second;
 }

int main()
{
    vector<pair<int,int>> points = {
        {0,3} , {2,2},{1,1},{2,1}, {3,0},{0,0},{3,3}
    };
}
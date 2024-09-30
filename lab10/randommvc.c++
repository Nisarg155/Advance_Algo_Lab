#include<bits/stdc++.h>

using namespace std;

int main()
{
    srand(time(NULL));
    // vector<vector<int>> edges  = {{0,1} , {0,3},{3,4},{3,2} , {2,5},{4,5},{5,6}};
    vector<vector<int>> edges = { {0,1},{1,2},{2,3},{3,4} };
    int sz = edges.size();
    int csz = 0;
    vector<bool> vis(sz,false);
    set<int> vertex;

    while(csz != sz)
    {
        
        int re = rand()%sz;
        cout<<"re"<<" "<<re<<endl;
        if(vis[re]) continue;
        vector<int> rv = edges[re];
        vertex.insert(rv[0]);
        vertex.insert(rv[1]);
        for(int i = 0;i<sz ;i++)
        {
            
            if( !vis[i] &&  (edges[i][0] == rv[0] || edges[i][0] == rv[1]))
            {
                
                vis[i] = true;
                csz++;
            }
            else if( !vis[i] &&  (edges[i][1] == rv[0] || edges[i][1] == rv[1])){
                vis[i] = true;
                csz++;
            }
        }
    }

    cout<<vertex.size()<<endl;
    for(auto it : vertex) cout<<it<<" ";
    cout<<endl;
}
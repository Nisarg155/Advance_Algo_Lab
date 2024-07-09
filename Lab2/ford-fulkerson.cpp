#include<bits/stdc++.h>

using namespace std;


bool bfs(vector<vector<int>> &rgp , int s , int t ,  vector<int> & par)
{
    int n = rgp.size();
    vector<int> vis(n,0);
    queue<int> q;
    q.push(s);
    vis[s] = 1;
    par[s] = -1;

    while(!q.empty())
    {
        int node = q.front();
        q.pop();

        for(int i = 0;i<n ;i++)
        {
            if(!vis[i] && rgp[node][i] > 0 )
            {
                if(i == t)
                {
                    par[i] = node;
                    return true;
                }
                q.push(i);
                vis[i] = 1;
                par[i] = node;
            }

        }
    }
    return false;
}

int fordfulkerson(vector<vector<int>> &gp , int s ,int t){

    int n = gp.size();
    vector<vector<int>> rgp = gp;
    

    vector<int> par(n) ;
    int max_flow = 0;


    while (bfs(rgp,s,t,par))
    {
        vector<int> aug_path;
        int path_flow = INT_MAX;
        aug_path.push_back(t);
        for(int i = t; i != s ;i = par[i])
        {

            int j = par[i];
            aug_path.push_back(j);
            path_flow = min(path_flow,rgp[j][i]);
        }
        for(int i = t; i != s; i = par[i])
        {
            int j = par[i];
            rgp[j][i] -= path_flow;
            rgp[i][j] += path_flow;
        }
        reverse(aug_path.begin(),aug_path.end());
        for(auto it : aug_path)
        {
            cout<<it<<"-";
        }
        cout<<" ";
        cout<<path_flow<<endl;   
        max_flow += path_flow;
    }
    cout<<"max f "<<max_flow;
    return max_flow;
    
}

int main()
{
    vector<vector<int>> graph = {
        {0 ,16,13,0,0,0},
        {0,0,10,12,0,0},
        {0,4,0,0,14,0},
        {0,0,9,0,0,20},
        {0,0,0,7,0,4},
        {0,0,0,0,0,0,}
    };
    fordfulkerson(graph,0,5);
}


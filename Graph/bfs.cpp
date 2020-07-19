#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int V,E;
vector<int> G[MAX];

void bfs(int root)
{
    queue<int> q;
    bool visited[V];

    q.push(root);
    visited[root] = 1;

    while(!q.empty())
    {
        int node=q.front();

        //Code to do with the search element
        cout<<node<<" ";

        q.pop();

        for(int child:G[node])
        {
            if(!visited[child])
            {
                visited[child] = 1;
                q.push(child);
            }
        }
    }
}

int main()
{
    cin>>V>>E;

    for(int i=0;i<E;i++)
    {
        int x,y;
        cin>>x>>y;
        G[x].push_back(y);
        G[y].push_back(x);
    }

    int root=0;
    bfs(root);

    return 0;
}

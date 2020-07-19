#include<bits/stdc++.h>
#define MAX 100
using namespace std;

int V,E;
vector<int> G[MAX];
bool visited[MAX];

void dfs(int root)
{
    //Code to do with the search element
    cout<<root<<" ";

    visited[root]=true;

    for(int child:G[root])
    {
        if(!visited[child])
        {
            dfs(child);
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
    dfs(root);

    return 0;
}

/*
10 9
0 1
1 2
2 3
0 4
4 5
5 6
0 7
7 8
8 9
*/


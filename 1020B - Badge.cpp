#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
 
#define MAX_N 1000
 
int adjVertex[MAX_N+1];
int visited[MAX_N+1];
int n;
 
int DFS(int u)
{
    memset(visited, 0, sizeof(visited));
    visited[u]=true;
    stack<int> s;
    s.push(u);
    while(!s.empty())
    {
        u=s.top();
        s.pop();
        int v=adjVertex[u];
        if(!visited[v])
        {
            visited[v]=true;
            s.push(u);
            s.push(v);
        }
        else
            return v;
    }
}
 
int main()
{
    int u, v;
    cin>>n;
    for(u=1; u<=n; u++)
    {
        cin>>v;
        adjVertex[u]=v;
    }
    for(u=1; u<=n; u++)
    {
        cout<<DFS(u)<<" ";
    }
    cout<<endl;
}

#include <iostream>
#include <cstring>
#include <stack>
using namespace std;
 
#define MAX_N 30000
 
int adjVertex[MAX_N+1];
int visited[MAX_N+1];
int n, t;
 
int DFS(int u)
{
    memset(visited, 0, sizeof(visited));
    visited[u]=true;
    stack<int> s;
    s.push(u);
    while(!s.empty() && !visited[t])
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
    }
    return visited[t];
}
 
int main()
{
    int u, x;
    cin>>n>>t;
    for(u=1; u<n; u++)
    {
        cin>>x;
        adjVertex[u]=u+x;
    }
    int ok = DFS(1);
    if(ok)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}

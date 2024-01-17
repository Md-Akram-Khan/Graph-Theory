#include<bits/stdc++.h>
using namespace std;
void dfs(int node, vector<int> adjacency_list[], vector<int> &visited, vector<int> &dfs_path)
{
    visited[node]=1;
    dfs_path.push_back(node);
    for(auto i: adjacency_list[node])
    {
        if(!visited[i])
        {
            dfs(i, adjacency_list, visited, dfs_path);
        }
    }
}
int main()
{
    int node,source_node,m;
    cin>>node>>source_node>>m;
    vector<int> adjacency_list[node + 1], visited(node + 1), dfs_path;
    for(int i=0; i<m; i++)
    {
        int a,b;//b is a adjacent node of a
        cin>>a>>b;
        adjacency_list[a].push_back(b);
    }
    dfs(source_node, adjacency_list, visited, dfs_path);
    cout<<"DFS traversal: ";
    for(int i=0; i<dfs_path.size(); i++)
        cout<<dfs_path[i]<<' ';
}
/*
input:
10 1 26
1 2
1 3
1 4
2 1
2 6
3 1
3 7
3 8
4 1
4 7
5 8
5 10
6 2
6 10
7 3
7 4
7 8
7 9
8 3
8 5
8 7
9 7
9 10
10 5
10 6
10 9
output:
DFS traversal: 1 2 6 10 5 8 3 7 4 9
input:
10 7 26
1 2
1 3
1 4
2 1
2 6
3 1
3 7
3 8
4 1
4 7
5 8
5 10
6 2
6 10
7 3
7 4
7 8
7 9
8 3
8 5
8 7
9 7
9 10
10 5
10 6
10 9
output:
DFS traversal: 7 3 1 2 6 10 5 8 9 4
*/

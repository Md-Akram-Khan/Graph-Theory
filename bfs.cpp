#include<bits/stdc++.h>
using namespace std;
void bfs(int source_node, vector<int> adjacency_list[], vector<int> &dis, vector<int> &visited)
{
    queue<int>q;
    q.push(source_node);
    dis[source_node]=0;
    visited[source_node]=1;
    while(!q.empty())
    {
        int u=q.front();
        q.pop();
        for(auto i : adjacency_list[u])
            if(!visited[i])
        {
            visited[i]=1;
            dis[i]=dis[u]+1;
            q.push(i);
        }
    }
}
int main()
{
    int node,source_node,m;
    cin>>node>>source_node>>m;
    vector<int> adjacency_list[node + 1], dis(node + 1),visited(node + 1);
    for(int i=0; i<m; i++)
    {
        int a,b;//b is a adjacent node of a
        cin>>a>>b;
        adjacency_list[a].push_back(b);
    }
    bfs(source_node, adjacency_list, dis, visited);
    for(int i=1; i<=node; i++)
        printf("Distence from %d to %d : %d\n",source_node,i,dis[i]);
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
Distence from 1 to 1 :0
Distence from 1 to 2 :1
Distence from 1 to 3 :1
Distence from 1 to 4 :1
Distence from 1 to 5 :3
Distence from 1 to 6 :2
Distence from 1 to 7 :2
Distence from 1 to 8 :2
Distence from 1 to 9 :3
Distence from 1 to 10 :3
*/
/*
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
Distence from 7 to 1 : 2
Distence from 7 to 2 : 3
Distence from 7 to 3 : 1
Distence from 7 to 4 : 1
Distence from 7 to 5 : 2
Distence from 7 to 6 : 3
Distence from 7 to 7 : 0
Distence from 7 to 8 : 1
Distence from 7 to 9 : 1
Distence from 7 to 10 : 2
*/

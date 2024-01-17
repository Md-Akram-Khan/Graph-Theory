#include<bits/stdc++.h>
using namespace std;
int node=4;
vector<vector<int>>matrix(node+1,vector<int>(node+1,0));
vector<vector<int>>weight(node+1,vector<int>(node+1));
int main()
{
    int n; cin>>n;
    for(int i=0; i<n; i++)
    {
        int a,b,c;//b is a adjacent node of a,c=weight
        cin>>a>>b>>c;
        matrix[a][b]=1;
        weight[a][b]=c;
    }

    cout<<"Adjacent node:(if adjacent value=1,else value=0)"<<endl;
    for(int i=1; i<=node; i++)
    {
        for(int j=1; j<=node; j++)
            cout<<matrix[i][j]<<' ';
        cout<<endl;
    }
    cout<<endl;

    cout<<"Weight of adjacent node:"<<endl;
    for(int i=1; i<=node; i++)
    {
        for(int j=1; j<=node; j++)
            cout<<weight[i][j]<<' ';
        cout<<endl;
    }
}
/*
input:
6
1 2 3
1 3 7
1 4 5
2 1 3
3 2 2
3 4 4

output:
Adjacent node:(if adjacent node value=1,else value=0)
0 1 1 1
1 0 0 0
0 1 0 1
0 0 0 0

Weight of adjacent node:
0 3 7 5
3 0 0 0
0 2 0 4
0 0 0 0
*/

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 +2;

// bool vis[N]={0};
// vector<int> adj[N];

// int main(){
    
//     int n,m;
//     cin>>n>>m;

//     int x,y;
//     for (int i = 0; i < m; i++)
//     {
//         cin>> x >> y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     queue<int> q;

//     return 0;
//  }
// // **** Adjecency Matrix REpresentation of a Graph****
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3+10;

// int graph[N][N] ={0};
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for (int i = 0; i < m; i++)
//     {
//         int v1,v2;
//         cin>>v1>>v2;
//         graph[v1][v2]=1;
//         graph[v2][v1]=1;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<graph[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     // Space Complexity O(N^2)
//     //N= 10^5 will not work
// 6 9
// 1 3 1 5
// 3 4 3 6 3 5 3 2
// 4 6
// 5 6
// 2 6
// // 0 0 1 0 1 0
// // 0 0 1 0 0 1
// // 1 1 0 1 1 1
// // 0 0 1 0 0 1
// // 1 0 1 0 0 1
// // 0 1 1 1 1 0

// // ****Adjacency list Representation of Weighted undirected Graph****
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 +10;
// // vector<int> graph2[N];
// vector<pair<int,int> >graph2[N];
// int main(){
//     int n, m;
//     cin>>n>>m;
//     for (int i = 0; i < m; i++)
//     {
//         int v1,v2,wt;
//         cin>>v1>>v2;
//         graph2[v1].push_back({v2,wt});
//         graph2[v2].push_back({v1,wt});
//     }
//     // space Complexity : 0(V+E) =~ V ^2;
//     return 0;
// }


// // //**** Depth First Search Traversal****
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3 + 10;
// vector<int> g[N];
// bool vis[N]={0};
// vector<vector<int>> cc; // for storing the connected component vectors.
// vector<int> curr_cc; // for storing the nodes in running dfs
// bool Cycle_exist =false;
// void dfs(int vertex)
// {
//     /**Take action on Vertex before going on child*/
//     if(vis[vertex]) return ;
//     cout<<vertex<<endl;
//     vis[vertex] = true;
//     curr_cc.push_back(vertex);
//     // curr_cc.push_back(vertex);
//     for (int child : g[vertex])
//     {
//         /*Take action on child before entering the child node.
//          */
//         // cout << "parent :" << vertex << "child" << child << endl;
//         // if (vis[child])
//         //     continue;
//         if(child!=vertex && vis[child]) Cycle_exist = true;
//         dfs(child);
//         /*Take action on child after exiting the child node
//          */
//     }
//     /*Take action on vertex before exiting the vetex. */
// }
// int main()
// {
//     int n, e;
//     cin >> n >> e;
//     for (int i = 0; i < e; i++)
//     {
//         int v1, v2;
//         cin >> v1 >> v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }

//     // // // find the total no. of Connected Component
//     // int cnt =0;
//     // for (int i = 1; i <= n; i++)
//     // {
//     //     if(vis[i]) continue;
//     //     curr_cc.clear();
//     //     dfs(i);
//     //     cc.push_back(curr_cc);
//     //     cnt++;
//     // }
//     // cout<<"No. of Connected COmponents : "<<cnt<<endl;
//     // for(auto vv :cc){
//     //     for(auto it : vv){
//     //         cout<<it<<" ";
//     //     }
//     //     cout<<endl;
//     // }
//     dfs(1);
//     cout<<endl;
//     cout<<Cycle_exist;
//     return 0;
// }
// 8 5
// 1 2
// 2 3
// 2 4
// 3 5
// 6 7

// 6 9
// 1 3
// 1 5
// 3 5
// 3 4
// 3 6
// 3 2
// 2 6
// 4 6
// 5 6

// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 +2;

// bool vis[N]={0};
// vector<int> adj[N];

// int main(){
    
//     int n,m;
//     cin>>n>>m;

//     int x,y;
//     for (int i = 0; i < m; i++)
//     {
//         cin>> x >> y;
//         adj[x].push_back(y);
//         adj[y].push_back(x);
//     }
//     queue<int> q;

//     return 0;
//  }
// // **** Adjecency Matrix REpresentation of a Graph****
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3+10;

// int graph[N][N] ={0};
// int main(){
//     int n,m;
//     cin>>n>>m;
//     for (int i = 0; i < m; i++)
//     {
//         int v1,v2;
//         cin>>v1>>v2;
//         graph[v1][v2]=1;
//         graph[v2][v1]=1;
//     }
//     for (int i = 1; i <= n; i++)
//     {
//         for (int j = 1; j <= n; j++)
//         {
//             cout<<graph[i][j]<<" ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

//     // Space Complexity O(N^2)
//     //N= 10^5 will not work
// 6 9
// 1 3 1 5
// 3 4 3 6 3 5 3 2
// 4 6
// 5 6
// 2 6
// // 0 0 1 0 1 0
// // 0 0 1 0 0 1
// // 1 1 0 1 1 1
// // 0 0 1 0 0 1
// // 1 0 1 0 0 1
// // 0 1 1 1 1 0

// // ****Adjacency list Representation of Weighted undirected Graph****
// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e5 +10;
// // vector<int> graph2[N];
// vector<pair<int,int> >graph2[N];
// int main(){
//     int n, m;
//     cin>>n>>m;
//     for (int i = 0; i < m; i++)
//     {
//         int v1,v2,wt;
//         cin>>v1>>v2;
//         graph2[v1].push_back({v2,wt});
//         graph2[v2].push_back({v1,wt});
//     }
//     // space Complexity : 0(V+E) =~ V ^2;
//     return 0;
// }


// //**** is Cycle Exist*****
#include <bits/stdc++.h>
using namespace std;
const int N = 1e3 + 10;
vector<int> g[N];
bool vis[N]={0};
bool dfs(int vertex,int par)
{
    /**Take action on Vertex before going on child*/
    
    // cout<<vertex<<endl;
    vis[vertex] = true;
    bool Cycle_exist =false; 
    for (int child : g[vertex])
    {
        /*Take action on child before entering the child node.
         */
        // cout << "parent :" << vertex << "child" << child << endl;
        if (vis[child] && child==par) continue;
        if(vis[child]) return true;
        Cycle_exist |=dfs(child,vertex);
        /*Take action on child after exiting the child node
         */
    }
    return Cycle_exist;
    /*Take action on vertex before exiting the vetex. */
}
int main()
{
    int n, e;
    cin >> n >> e;
    for (int i = 0; i < e; i++)
    {
        int v1, v2;
        cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }

    // // // find the total no. of Connected Component
    // int cnt =0;
    bool Cycle_exist =false;
    for (int i = 1; i <= n; i++)
    {
        if(vis[i]) continue;
        if(dfs(i,0)){
            Cycle_exist = true;
            break;
        }
        
    }
    if(Cycle_exist){
        cout<<"Cycle Exist"<<endl;
    }else
      cout<<"Cycle do not Exist"<<endl;
    
    // cout<<"No. of Connected COmponents : "<<cnt<<endl;
    // for(auto vv :cc){
    //     for(auto it : vv){
    //         cout<<it<<" ";
    //     }
    //     cout<<endl;
    // }
    // dfs(1);
    
    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;
// const int N = 1e3;

// vector<int> g[N];
// bool vis[N];f


// bool dfs(int vertex ,int par){

//     vis[vertex]=true;
//     bool isCycleExist = false;
//     for (int child: g[vertex])
//     {
//         if(vis[child]&& child== par) continue;
//         if(vis[child]) return true;

//         isCycleExist |= dfs(child,par);
//     }
//    return isCycleExist; 
// }
// int main(){
//     int n,e;
//     cin>>n>>e;

//     for (int i = 0; i <e; i++)
//     {
//         int v1,v2;
//         cin>>v1,v2;
//         g[v1].push_back(v2);
//         g[v2].push_back(v1);
//     }
//     bool IsCycleExist = false;
//     for (int i = 1; i <=n; i++)
//     {
//         if(vis[i]) continue;

//         if(dfs(i,0)){
//             IsCycleExist =true;
//             break;
//         }
//     }
//     cout<<IsCycleExist<<endl;
//     return 0;
// }
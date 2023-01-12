// course schedule leetcode 207
/*
this problem can be solved by BFS algorithm in directed graph
*/

#include <bits/stdc++.h>
#include <iostream>
using namespace std;

int main()
{
    int numCourse = 2;
    vector<vector<int>> pre{
        {1, 0}, {0, 1}};
    // create graph
    vector<vector<int>> graph(numCourse);
    for (auto it : pre)
    {
        graph[it[0]].push_back(it[1]);
    }

    int ans = 0, n = pre.size();
    vector<int> indegree(n, 0); 
    for (auto it : graph)    //marks index of node in indegree as true
    {
        for (auto x : it)
        {
            indegree[x]++;
        }
    }

    vector<bool> vis(n, false);
    queue<int> q;
    for (int i = 0; i < n; i++)
    {
        if (indegree[i] == 0)
        {
            ans++;
            q.push(i);
        }
    }

    while (!q.empty())
    {
        /* code */
        int node = q.front();
        q.pop();

        if (vis[node])
            continue;
        vis[node] = true;

        for (auto neigh : graph[node])
        {
            indegree[neigh]--;
            if (indegree[neigh] == 0)
            {
                ans++;
                q.push(neigh);
            }
        }
    }
    if (ans == n - 1)
        cout << "true";
    else
        cout << "false";

    return 0;
}

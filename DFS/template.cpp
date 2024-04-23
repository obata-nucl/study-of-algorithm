#include<iostream>
#include<vector>

using namespace std;
using Graph = vector<vector<int>>;

//DFS(Depth-first search)
vector<bool> seen;
void dfs(const Graph &G, int v){        //グラフGについて探索する。初期の頂点をvで与える
    seen[v] = true;
    for(auto next_v : G[v]){            //vと隣接している頂点next_vに対して
        if(seen[next_v]) continue;      //探索済みなら違うブランチへ移る
        dfs(G, next_v);                 //next_vを始点としてさらに深いところを探索
    }
}
int main(){
    int n,m;
    cin >> n >> m;

    Graph G(n);
    for(int i=0;i<m;++i){               //辺の入力(ここでは無向グラフ)
        int a,b;
        cin >> a >> b;
        G[a].push_back(b);
        G[b].push_back(a);
    }

    seen.assign(n, false);              //senn全体をfalseに初期化
    dfs(G, 0);
}
//Atcoder Typical Contest 001-A
#include<bits/stdc++.h>
using namespace std;


//unit vector
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int h,w;
vector<string> field;

bool seen[510][510];    //seen[i][j] : i行j列のマスを訪問済みかどうか

void dfs(int h, int w){
    seen[h][w] = true;

    //4方向探索
    for(int dir = 0; dir < 4; ++dir){
        int nh = h + dx[dir];
        int nw = w + dy[dir];

        if(nh < 0 || nh >= h || nw < 0 || nw >= w) continue;
        if(field[nh][nw] == '#') continue;

        if(seen[nh][nw]) continue;

        dfs(nh, nw);
    }
}

int main(){
    cin >> h >> w;
    field.resize(h);

    for(int i=0;i<h;++i){
        cin >> field[i];
    }

    int sh=0, sw=0, gh=0, gw=0;
    for(int i=0;i<h;++i){
        for(int j=0;j<w;++j){
            if(field[i][j] == 's') sh = i, sw = j;
            if(field[i][j] == 'g') gh = i, gw = j;
        }
    }

    memset(seen, 0, sizeof(seen));
    dfs(sh,sw);

    if(seen[gh][gw]){
        cout << "Yes" << endl;
    }
    else{
        cout << "No" << endl;
    }

    return 0;
}
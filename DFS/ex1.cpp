//Atcoder Typical Contest 001-A
#include<bits/stdc++.h>
using namespace std;


//unit vector
const int dx[4] = {1,0,-1,0};
const int dy[4] = {0,1,0,-1};

int h,n;
vector<string> field;

bool seen[510][510];    //seen[i][j] : i行j列のマスを訪問済みかどうか

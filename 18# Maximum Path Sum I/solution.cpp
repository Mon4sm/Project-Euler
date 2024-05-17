#include <bits/stdc++.h>

#define piii pair<int,pair<int,int>>

using namespace std;

int input[]={75,64,82,10,65,34,67,92,33,29,14,57,48,31,23,95,47,87,47,3,63,70,70,94,51,17,29,40,4,17,35,82,75,7,16,80,16,97,68,27,87,60,18,4,23,73,6,40,37,52,39,50,69,53,20,1,77,28,83,32,91,78,58,16,38,19,2,4,56,47,43,17,43,73,93,88,65,26,33,25,73,91,30,73,99,41,72,65,77,14,67,98,41,48,44,28,17,53,70,41,71,33,38,89,9,53,11,52,68,23,70,71,4,27,91,66,98,63,62,4};
int gridx[] = {0,1};
int gridy[] = {1,1};

int main(){
    vector<vector<int>> adj(15,vector<int>(15,0));
    int idx=0;
    for(int i=0;i<15;i++){
        for(int j=0+i;j<15;j++){
            adj[i][j] = input[idx++];
        }
    }
    int ans = 0;
    queue<piii> q;
    q.push({75,{0,0}});
    while(!q.empty()){
        int w = q.front().first;
        int nx = q.front().second.first;
        int ny = q.front().second.second;
        q.pop();
        if(ny==14){
            ans = max(ans,w);
            continue;
        }
        for(int i=0;i<2;i++){
            int x = gridx[i]+nx;
            int y = gridy[i]+ny;
            if(0<=x && x<15 && 0<=y && y<15){
                q.push({w+adj[x][y],{x,y}});
            }
        }
    }
    cout << ans;
    return 0;
}

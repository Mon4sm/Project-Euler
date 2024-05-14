#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<vector<int>> arr(20,vector<int>(20,0));
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            string s;cin >> s;
            arr[i][j]+= (int(s[0])-int('0'))*10;
            arr[i][j]+= (int(s[1])-int('0'));
        }
    }
    int ans = 0;
    int gx[] = {-3,-3,0,3,3,3,0,-3};
    int gy[] = {0,3,3,3,0,-3,-3,-3};
    int px[] = {-1,-1,0,1,1,1,0,-1};
    int py[] = {0,1,1,1,0,-1,-1,-1};
    for(int i=0;i<20;i++){
        for(int j=0;j<20;j++){
            for(int k=0;k<8;k++){
                long long int x=i+gx[k];
                long long int y=j+gy[k];
                if(0<=x && x<20 && 0<=y && y<20){
                    int m = arr[i][j];
                    int o ,p;
                    o = i;
                    p = j;
                    for(int q=0;q<3;q++){
                        o+=px[k];
                        p+=py[k];
                        m*=arr[o][p];
                    }
                    ans = max(ans,m);
                }
            }
        }
    }
    cout << ans;
    return 0;
}

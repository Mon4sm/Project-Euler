#include <bits/stdc++.h>

#define int long long int

using namespace std;

int32_t main() {
    vector<vector<int>> dp(22,vector<int>(22,0));
    dp[1][1] = 1;
    for(int i=1;i<=21;i++){
        for(int j=1;j<=21;j++){
            if(!(i==1 && j==1)){
                dp[i][j] = dp[i-1][j]+dp[i][j-1];
            }
        }
    }
    cout<<dp[21][21];
}

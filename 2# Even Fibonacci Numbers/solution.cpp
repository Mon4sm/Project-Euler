#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> dp(1000000);
    dp[0] = 1;
    dp[1] = 2;
    int ans = 2;
    for(int i=2;i<1000000;i++){
        dp[i] = dp[i-1]+dp[i-2];
        if(dp[i] > 4000000){
            break;
        }
        if(!(dp[i]&1)){
            ans+=dp[i];
        }
    }
    cout << ans;
    return 0;
}

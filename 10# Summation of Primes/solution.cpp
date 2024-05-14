#include <bits/stdc++.h>

#define int long long int

using namespace std;

int32_t main(){
    vector<int> dp(2000001,1);
    dp[0] = 0;
    dp[1] = 0;
    int ans = 0;
    for(int i=0;i<2000000;i++){
        if(dp[i] == 1){
            ans+=i;
            for(int j=2;j*i<=2000000;j++){
                dp[i*j] = 0;
            }
        }
    }
    cout << ans;
    return 0;
}

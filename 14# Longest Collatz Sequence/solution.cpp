#include <bits/stdc++.h>

#define int long long int

using namespace std;

vector<int> dp(1000000,0);

int solve(int x){
    int temp = x;
    int count = 1;
    while(x!=1){
        if(x&1){
            x = (x*3)+1;
        }
        else{
            x/=2;
        }
        if(x<1000000 && dp[x]>0){
            count+=dp[x];
            break;
        }
        count++;
    }
    dp[temp]= count;
    return count;
}

int32_t main(){
    int count = 0,ans = 0;
    for(int i=1;i<1000000;i++){
        int x = solve(i);
        if(x>count){
            ans = i;
            count = x;
        }
    }
    cout << ans;

    return 0;
}

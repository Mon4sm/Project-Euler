#include <bits/stdc++.h>

using namespace std;

int main(){
    vector<int> dp(200000,1);
    int count = 0;
    for(int i=2;i<200000;i++){
        if(dp[i] == 1){
            count++;
            if(count == 10001){
                cout<<i;
                break;
            }
            for(int j=1;j*i<200000;j++){
                dp[j*i] = 0;
            }
        }
    }
    return 0;
}

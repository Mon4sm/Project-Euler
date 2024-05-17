#include <bits/stdc++.h>

using namespace std;

int below_20[] = {0,3,3,5,4,4,3,5,5,4,3,6,6,8,8,7,7,9,8,8};
int tens[] = {0,0,6,6,5,5,5,7,6,6};

int solve(int n){
    if (n == 1000) return 11;
    int ans = 0;
    if (n >= 100){
        ans += below_20[n / 100] + 7;
        n %= 100;
        if (n != 0) ans += 3;
    }
    if (n >= 20){
        ans += tens[n / 10];
        n %= 10;
        if (n != 0) ans += below_20[n];
    }
    else if (n > 0){
        ans += below_20[n];
    }
    return ans;
}

int main(){
    int ans = 0;
    for (int i=1;i<=1000;i++){
        ans+=solve(i);
    }
    cout << ans;
    return 0;
}

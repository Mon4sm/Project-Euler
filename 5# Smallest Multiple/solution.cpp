#include <bits/stdc++.h>

using namespace std;

int gcd(int a,int b){
    while(b!=0){
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}

int main() {
    int ans = 1;
    for(int i=1;i<20;i++){
        ans = lcm(ans,i+1);
    }
    cout << ans;
    return 0;
}

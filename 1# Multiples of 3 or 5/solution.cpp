#include <bits/stdc++.h>

using namespace std;

int main(){
    int ans = 0;
    for(int i=3;i<1000;i+=3){
        ans+=i;
    }
    for(int i=5;i<1000;i+=5){
        ans+=i;
    }
    for(int i=15;i<1000;i+=15){
        ans-=i;
    }
    cout << ans;
    return 0;
}

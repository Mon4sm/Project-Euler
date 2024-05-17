#include <bits/stdc++.h>

using namespace std;

vector<int> check(10000,0);

int solve(int x){
    int count = 1;
    for(int i=2;i*i<=x;i++){
        if(x%i == 0){
            int a = i;
            int b = x/i;
            if(a == b){
                count+=a;
            }
            else{
                count+=a+b;
            }
        }
    }
    return count;
}

int main(){
    int ans = 0;
    for(int i=1;i<10000;i++){
        if(check[i] == 0){
            int a = solve(i);
            if(solve(a) == i &&i!=a&& a<10000 && i<10000){
                ans+=a+i;
                check[a] = 1;
                check[i] = 1;
            }
        }
    }
    cout << ans;
    return 0;
}

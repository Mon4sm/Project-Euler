#include <bits/stdc++.h>

using namespace std;

long long int solve(long long int x){
    for(int i=2;i*i<=x;i++){
        if(x%i == 0){
            return solve(x/i);
        }
    }
    return x;
}

int main(){
    long long int num = 600851475143;
    cout << solve(num);
    return 0;
}

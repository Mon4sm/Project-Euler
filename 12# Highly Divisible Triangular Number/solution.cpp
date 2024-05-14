#include <bits/stdc++.h>

using namespace std;

bool solve(int x){
    int count = 0;
    for(int i=1;i*i<=x;i++){
        if(x%i == 0){
            count++;
            if(i!=(x/i)){
                count++;
            }
        }
    }
    return count>500;
}

int main(){
    int n = 1;
    for(int i=2;i<1000000;i++){
        if(solve(n)){
            cout << n;
            return 0;
        }
        n+=i;
    }
    return 0;
}

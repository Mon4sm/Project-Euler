#include <bits/stdc++.h>

#define int long long int

using namespace std;

bool solve(int n){
    int sum = 1;
    for(int i=2;i*i<=n;i++){
        if(n%i==0){
            sum+=i;
            if(i!=n/i){
                sum+=n/i;
            }
        }
    }
    return sum > n;
}

int32_t main(){
    int full = 0;
    vector<int> ab;
    for(int i=1;i<=28123;i++){
        full+=i;
        if(solve(i)){
            ab.push_back(i);
        }
    }
    set<int> absum;
    for(int i=0;i<ab.size();i++){
        for(int j=i;j<ab.size();j++){
            if(ab[i]+ab[j]<=28123){
                absum.insert(ab[i]+ab[j]);
            }
        }
    }
    for(int i:absum){
        full-=i;
    }
    cout << full;
    return 0;
}

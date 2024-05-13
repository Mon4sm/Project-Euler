#include <bits/stdc++.h>

using namespace std;

bool check(int x){
    string str = to_string(x);
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    return str == rev_str;
}

bool solve(int x){
    int a = sqrt(x)+1;
    for(int i=a;i>=100;i--){
        if(x%i == 0){
            if(1000>i && i>=100 && 1000>(x/i) && (x/i)>=100){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int left = 800000,right = 998001,ans = 0;
    while(left<=right){
        int mid = (left+right)/2;
        if(check(mid) && solve(mid)){
            left++;
            ans = mid;
        }
        else{
            left++;
        }
    }
    cout << ans;
    return 0;
}

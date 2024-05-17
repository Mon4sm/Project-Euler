#include <bits/stdc++.h>

using namespace std;

void fib(vector<int>f1,vector<int>f2,int x){
    int n = f1.size();
    int m = f2.size();
    int remain = 0;
    vector<int> f3;
    for(int i=0;i<n;i++){
        int sum = (f1[i]+f2[i]+remain);
        f3.push_back(sum%10);
        remain = sum/10;
    }
    if(m>n){
        for(int i=n;i<m;i++){
            int sum = (f2[i]+remain);
            f3.push_back(sum%10);
            remain = sum/10;
        }
    }
    if(remain!=0){
        f3.push_back(remain);
    }
    if(f3.size()>=1000){
        cout << x;
        return;
    }
    fib(f2,f3,x+1);
}

int main(){
    vector<int>f1(1,1);
    vector<int>f2(1,1);
    fib(f1,f2,3);
    return 0;
}

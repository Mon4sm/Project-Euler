#include <bits/stdc++.h>

using namespace std;

void solve(vector<int> arr,int x){
    if(x == 1000){
        int ans=0;
        for(int i:arr){
            ans+=i;
        }
        cout << ans;
        return;
    }
    int remain = 0;
    int n= arr.size();
    vector<int> temp;
    for(int i=0;i<n;i++){
        temp.push_back(((arr[i]*2)%10)+remain);
        remain = (arr[i]*2)/10;
    }
    if(remain!=0){
        temp.push_back(remain);
    }
    solve(temp,x+1);
}

int main(){
    vector<int> arr(1,1);
    solve(arr,0);
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,m;
    for(n=1;n<=500;n++){
        for(m=1;m<=500;m++){
            if((m*m)+(m*n) == 500){
                int c = (m*m)+(n*n);
                int a = (m*m)-(n*n);
                int b = 2*m*n;
                if(a+b+c == 1000){
                    cout <<a*b*c;
                    return 0;
                }
            }
        }
    } 
    return 0;
}

#include <bits/stdc++.h>

using namespace std;

int main() {
    int ans = 0;
    for (int i = 1901; i <= 2000; i++) {
        for (int j = 1; j <= 12; j++) {
            tm t = {};
            t.tm_year = i - 1900;
            t.tm_mon = j - 1;
            t.tm_mday = 1;
            mktime(&t);
            if (t.tm_wday == 0) {
                ans++;
            }
        }
    }
    cout << ans;
    return 0;
}

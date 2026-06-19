#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;  
    int W;  
    cin >> n;
    cin >> W;
    int vrednosti[] = {1, 7, 11, 15};
    int tezine[] = {1, 3, 4, 6};

    int dp[W+1] = {0}; 

    for (int i = 0; i < n; i++) {
        for (int w = W; w >= tezine[i]; w--) {
            dp[w] = max(dp[w], vrednosti[i] + dp[w - tezine[i]]);
        }
    }

    cout << dp[W] << '\n';
    return 0;
}
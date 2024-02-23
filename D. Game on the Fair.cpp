#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int N = 1e5+7;
int n, arr[N], dp[N];
 
int jump( int i ){
 
    if( i >= n ) return 0;
    if( dp[i] != -1 ) return dp[i];
 
    int res = N;
    for(int j = 1; j<= arr[i]; j++){
        res = min(res, jump(i + j) + 1);
    }
    return dp[i] = res;
}
 
void solve( int cs ){
 
    cin >> n;
 
    for(int i = 1; i <= n; i++){
        cin >> arr[i];
    }
 
    for(int i = 1; i <= n+2; i++) dp[i] = -1;
 
    int ans = jump( 1 );
    cout << "Case " << cs << ": " << ans << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc = 1, cs = 0;
    cin >> tc;
 
    while( tc-- ){
        solve( ++cs );
    }
}

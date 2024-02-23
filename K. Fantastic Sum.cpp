#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
const int N = 1e6;
ll mod = 1000000007;
ll fib[N];
 
void gen(){
    fib[1] = 0;
    fib[2] = 1;
    for(int i = 3; i <= N; i++){
        fib[i] = fib[i-1] + fib[i-2];
        fib[i] = fib[i] % mod;
    }
}
 
void solve( int cs ){
 
    int n;
    cin >> n;
 
    ll ans = 0;
    for(int i = 1; i <= n; i++){
        ll tmp = ( (fib[i] % mod) * (fib[i] % mod) ) % mod;
        ans = (ans + tmp) % mod;
    }
    cout << "Case " << cs << ": " <<  ans << endl;
}
 
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    gen();
    int tc = 1, cs = 0;
    cin >> tc;
 
    while( tc-- ){
        solve( ++cs );
    }
}

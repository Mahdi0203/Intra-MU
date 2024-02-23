#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
ll get( ll x ){
    ll tmp = ( (x) * (x-1) * (x-2) ) / 6;
    return tmp;
}
 
void solve( int cs ){
 
    int n;
    cin >> n;
 
    map<ll,ll> mp;
 
    for(int i =0;  i< n; i++){
        ll x;
        cin >> x;
        mp[x]++;
    }
 
    ll ans =0 ;
    for(auto [x,y] : mp){
        if( y >= 3 ){
            ans += get(y);
        }
    }
    cout << ans << endl;
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

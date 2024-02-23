#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve( int cs ){
 
    int n;
    cin >> n;
  
    vector<int> v(n);
    for(auto &x: v) cin >> x;
 
    int cnt = 0, ase = 0;
    vector<int> baad;
    for(auto x : v){
        if( x >= 80 ){
            cnt++;
            ase += (x - 80);
        }
        else{
            baad.push_back(x);
        }
    }
    sort( baad.rbegin(), baad.rend() );
 
    for(auto x : baad){
        int need = 80-x;
        if(need <= ase ){
            cnt++;
            ase -= need;
        }
        else{
            break;
        }
    }
    cout << cnt << endl;
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
 
    int tc = 1, cs = 0;
   // cin >> tc;
 
    while( tc-- ){
        solve( ++cs );
    }
}

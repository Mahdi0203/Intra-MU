#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve( int cs ){
 
    int n;
    cin >> n;
 
    vector<int> v(n);
    int sz   = 0;
    for(auto &x: v) {
        cin >> x;
        sz += x;
    }
 
    int k ;
    cin >> k;
 
    double per = ( (double)k / sz );
 
    for(int i = 0; i < n; i++){
        cout << "Budget for Club " << (i+1) << ": " << (int) (v[i] * per) << " Taka"  << endl;
    }
 
}
 
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
 
    int tc = 1, cs = 0;
   // cin >> tc;
 
    while( tc-- ){
        solve( ++cs );
    }
}

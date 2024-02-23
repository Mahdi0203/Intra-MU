#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;

void solve( int cs ){
 
    string s;
    cin >> s;
 
    int n = s.size();
 
    string s1 = s;
    reverse( s1.begin(), s1.end() );
    if( s1 == s ){
        for(int i =0 ; i < n; i++){
            cout << s << ' ' ;
        }
        cout << endl;
    }
    else{
        cout << "Fool " << s << "!" << endl;
    }
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

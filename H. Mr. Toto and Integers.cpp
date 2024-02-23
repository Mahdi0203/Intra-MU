#include<bits/stdc++.h>
using namespace std;
 
using ll = long long;
 
void solve( int cs ){
 
    string s;
    cin >> s;
 
    map<char,vector<int>> mp;
    for(int i = 0;  i < s.size(); i++){
        mp[s[i]].push_back(i+1);
    }
 
    int q;
    cin >> q;
 
    while( q-- ){
        string tp;
        cin >> tp;
 
        int cur = -1;
        bool f1 = true;
        for(int i = 0; i < tp.size() ; i++){
            //vector<int>  idx = mp[tp[i]];
            auto it = upper_bound( mp[tp[i]].begin(), mp[tp[i]].end(),  cur) ;
            if( it == mp[tp[i]].end() ){
                f1 = false;
                break;
            }
            else{
                cur = *(it);
            }
        }
 
        cout <<  ( (f1) ? "YES" : "NO" ) << endl;
 
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

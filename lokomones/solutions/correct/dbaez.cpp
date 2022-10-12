#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int x,y;
    cin>>x>>y;
    vector<int> typ(x);
    vector<string> val(x);
    for (int i=0;i<x;i++){
        char c;
        cin>>c>>val[i];
        if (c == 'n') typ[i] = 0;
        else if (c == 't') typ[i] = 1;
        else if (c == 'a') typ[i] = 2;
        else if (c == 'd') typ[i] = 3;
        else if (c == 'e') typ[i] = 4;
        else typ[i] = 5;
    }
    string ans = "";
    while (y--){
        vector<string> vals(6);
        for (int i=0;i<6;i++) cin>>vals[i];
        bool ok = true;
        for (int i=0;i<x && ok;i++){
            if (vals[typ[i]] == val[i]) ok = false;
        }
        if (ok){
            if (ans == "") ans = vals[0];
            else {
                ans = "";
                break;
            }
        }
    }
    if (ans == "") cout<<"IMPOSIBLE\n";
    else cout<<ans<<'\n';
    return 0;
}
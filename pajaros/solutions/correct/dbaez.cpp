#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n,m;
    cin>>n>>m;
    vector<int> p(n);
    for (int i=0;i<n;i++) cin>>p[i];
    vector<int> c(m);
    for (int i=0;i<m;i++) cin>>c[i];
    sort(p.begin(),p.end(),greater<int>());
    sort(c.begin(),c.end(),greater<int>());
    int ci = 0;
    bool ok = true;
    for (int i=0;i<m && ok;i++){
        if (ci == n) ok = false;
        else {
            if (p[ci] >= c[i]) ci++;
            else {
                c[i] -= p[ci];
                i--;
                ci++;
            }
        }
    }
    if (ok) cout<<"SI\n";
    else cout<<"NO\n";
    return 0;
}
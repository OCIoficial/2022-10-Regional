#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main(){
    ios_base::sync_with_stdio(0); cin.tie(0);
    int n;
    cin>>n;
    int l[n];
    for (int i=0;i<n;i++) cin>>l[i];
    int a,j;
    cin>>a>>j;
    sort(l,l+n);
    int fp = 0;
    int c = 0;
    for (int i=0;i<j;i++){
        c += a;
        while (fp < n && l[fp] < c) fp++;
        if (fp < n && l[fp] == c) i--;
    }
    cout<<c<<'\n';
    return 0;
}
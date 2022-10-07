#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n; cin >> n;
	vector <int> bad(n);
	for(int i=0; i<n; i++){
		cin >> bad[i];
	}
	sort(bad.begin(), bad.end());
	int a, j;
	cin >> a >> j;
	int ans = a*j;
	for(int i=0; i<n; i++){
		if(bad[i] > ans) break;
		if(bad[i]%a == 0){
			ans += a;
		}
	}
	cout << ans << '\n';
	return 0;
}

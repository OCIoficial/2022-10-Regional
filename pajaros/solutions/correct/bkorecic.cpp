#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

int main(){
	ios_base::sync_with_stdio(0); cin.tie(0);
	int n, m;
	cin >> n >> m;
	vector <int> a(n), b(m);
	for(int i=0; i<n; i++) cin >> a[i];
	for(int i=0; i<m; i++) cin >> b[i];
	sort(a.begin(), a.end(), greater<int>());
	sort(b.begin(), b.end(), greater<int>());
	int i=0;
	for(int j=0; j<m; j++){
		if(i <= n-1 && a[i] >= b[j]){
			i++;
		}
		else if(i <= n-2 && a[i] == 1 && b[j] == 2){
			i+=2;
		}
		else{
			cout << "NO\n";
			return 0;
		}
	}
	cout << "SI\n";
	return 0;
}

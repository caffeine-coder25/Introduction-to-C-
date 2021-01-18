#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1e9 + 7
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x; cin>>x; while(x--)

void caffeine_coder25() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

int linearSearch(int *arr, int n, int x)
{
	int i;
	for (i = 0; i < n; i++) {
		if (arr[i] == x)
			return i;
	}
	return -1;
}

int32_t main() {
	caffeine_coder25();
	w(t) {
		int n, i, x;
		cin >> n;
		int a[n];
		for (i = 0; i < n; i++) {
			cin >> a[i];
		}
		cin >> x;
		cout << linearSearch(a, n , x);
	}
	return 0;
}

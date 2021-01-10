/*
Write a basic program to add two numbers.
*/

#include<bits/stdc++.h>
using namespace std;

#define int long long
#define mod 1e9 + 7
#define inf 1e18
#define ps(x,y) fixed<<setprecision(y)<<x
#define w(x) int x; cin>x; while(x--)

void caffeine_coder25() {
	ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
#endif
}

void add(int a, int b) {
	cout << a + b;
}

int32_t main() {
	caffeine_coder25();
	int a, b;
	cin >> a >> b;
	add(a, b);
	return 0;
}

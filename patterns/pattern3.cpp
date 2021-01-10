/* Print a pattern like for input n where n denotes number of rows
  1 
 23
456
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

int32_t main() {
	caffeine_coder25();
	int n;
	cin >> n;
	int i = 1, val = 1;
	while (i <= n) {
		int j = 1, spaces = n - i;
		while (j <= i) {
			while (spaces) {
				cout << " ";
				spaces--;
			}
			cout << val;
			val++;
			j++;
		}
		cout << endl;
		i++;
	}
	return 0;
}

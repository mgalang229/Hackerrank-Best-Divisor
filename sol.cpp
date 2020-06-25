#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

void decode() {
	int n;
	cin >> n;
	int ans = 1, best = -1, s, tmp;
	for(int i = 1; i <= n; ++i) {
		if(n % i != 0) continue;
		s = 0;
		tmp = i;
		while(tmp != 0) {
			s += tmp % 10;
			tmp /= 10;
		}
		if(s > best) {
			best = s;
			ans = i;
		}
	}
	cout << ans << "\n";
}
int main() {
	ios::sync_with_stdio(false);
	cin.tie(0);
	decode();
	return 0;
}

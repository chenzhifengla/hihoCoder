#include <iostream>
using namespace std;
int main() {
	int t;
	cin >> t;
	while (t--) {
		int n, k;
		cin >> n >> k;
		int f = 0;
		for (int i = 2; i <= n; i++) {
			f = f + k;
			while (f >= i) f -= i;
			while (f < 0) f += i;
		}
		cout << f << endl;
	}
	return 0;
}
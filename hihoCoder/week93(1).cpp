#include <iostream>
#include <string.h>
using namespace std;
int main() {
	int n;
	while (cin >> n) {
		int* prime = new int[n + 1];
		bool* flag = new bool[n + 1];
		int cnt = 0;
		memset(flag, 0, sizeof(bool)*(n + 1));
		for (int i = 2; i <= n; i++) {
			if (!flag[i]) {
				prime[cnt++] = i;
			}
			for (int j = 0; j < cnt && i * prime[j] <= n; j++) {
				flag[i*prime[j]] = true;
				if (i % prime[j] == 0) {
					break;
				}
			}
		}
		cout << cnt << endl;
		delete[] prime;
		delete[] flag;
	}
	return 0;
}
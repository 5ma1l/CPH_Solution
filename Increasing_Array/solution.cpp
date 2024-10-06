#pragma GCC optimize(3)
#pragma GCC optimize("Ofast")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
 
using namespace std;
int main() {
	int n;
	cin >> n;
	long long moves=0;
	int x=0;
	for (int i=0;i<n;i++){
		int prv=x;
		cin >> x;
		if (prv>x)
		{
			moves+=(prv-x);
			x=prv;
		}
	}
	cout << moves << '\n';
}

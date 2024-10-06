#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main() {
	int n;
	cin >> n;
	ll sm=n*(n+1)/2;
	if (sm%2==0){
		cout << "YES\n";
		if (n%4==0){
			cout << n/2 << '\n';
			for (int i=1;i<n;i+=4){
				cout << i << ' ';
				cout << i+3 << ' ';
			}
			cout << '\n';
			cout << n/2 << '\n';
			for (int i=2;i<n;i+=4){
				cout << i << ' ';
				cout << i+1 << ' ';
			}
			cout << '\n';
		}
		else {
			cout << n/2 + 1 << '\n';
			cout << 1 << ' ';
			for (int i=2;i<n-2;i+=4) {
				cout << i << ' ';
				cout << i+3 << ' ';
			}
			cout << n-1;
			cout << '\n';	
			cout << n/2 << '\n';
			for (int i=3;i<n-2;i+=4) {
				cout << i << ' ';
				cout << i+1 << ' ';
			}
			cout << n;
			cout << '\n';
		}
	}	
	else {
		cout << "NO\n";
	}
}

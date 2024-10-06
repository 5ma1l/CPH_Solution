#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	ll n;
	cin >> n;
	ll mod = pow(10,9)+7;
	ll p = 1;
	for (ll i=0;i<n;i++)
	{
		if (p > mod)
			p-=mod;
		p*=2;
	}
	cout << p%mod << '\n';
 
}

#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	ll n;
	cin >> n;
	ll zeros=0;
	ll pow=5;
	while (n/pow>0){
		zeros+=n/pow;
		pow*=5;
	
	}
		
	cout << zeros << '\n'; 
}

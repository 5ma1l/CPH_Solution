#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
ll no_attack(ll k){
	ll mv=k*k*(k*k-1)/2;
	ll ak=4*(k-1)*(k-2);
	return mv-ak; 
	}
 
int main() {
	int n;
	cin >> n;
	for (int i=1;i<=n;i++)
		cout<<no_attack(i)<<'\n';	
}

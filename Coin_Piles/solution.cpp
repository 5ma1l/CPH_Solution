#include <bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main() {
	unsigned int t;
	cin >> t;
	int res[t];
	for (unsigned int i=0;i<t;i++){
		
		ll a,b;
		cin >> a >> b;
		
		ll c=2*a-b;
		ll d=2*b-a;
		if (c%3 == 0 && d%3 == 0)
			res[i]=1;
		else
			res[i]=0;
			
	}
	
	for (int i : res){
		if (i==1)
			cout << "YES\n";
		else
			cout << "NO\n";
	} 	
 
}

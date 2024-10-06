#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
long long value(long long y,long long x){
		ll value;
		ll mx=max(y,x);
		ll dim=mx*mx;
		ll mn=(mx-1)*(mx-1)+1;
		if (dim==1) return 1;
		if (mx%2==0){
			if (mx==y){
				value=dim-x+1;
				}
			else {
				value=mn+y-1;
				}
		}
		else {
			
			if (mx==y){
				value=mn+x-1;
				}
			else {
				value=dim-y+1;
				}
		}
		return value;
	}
 
int main() {
	int t;
	cin >> t;
	ll y[t],x[t];
	for (int i=0;i<t;i++){
		cin >> y[i] >> x[i];
	}
	for (int j=0;j<t;j++){
		cout << value(y[j],x[j]) << '\n';
	}
		
}

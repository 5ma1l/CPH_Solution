#include <bits/stdc++.h>
using namespace std;
 
 
void wierd(long long n) {
	if (n==1)		
		cout << 1 << "\n";
	else if (n%2==0)
{		cout << n << " ";
		wierd(n/2);
}	else
{		cout << n << " ";
		wierd(n*3+1);
}}
 
 
int main() {
	long long n;
	cin >> n;
	wierd(n);
}


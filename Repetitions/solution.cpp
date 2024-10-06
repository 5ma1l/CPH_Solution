#include <bits/stdc++.h>
using namespace std;
int main() {
	int mx=0,lc=1;
	string s;
	cin >> s;
	int n=s.length();
	for (int i = 0 ;i<n-1;i++ )	
	{
		if (s[i]!=s[i+1])
{			mx=max(mx,lc);
			lc=1;
}		else
			lc++;					
	}
	cout << max(mx,lc) << '\n';
	
}

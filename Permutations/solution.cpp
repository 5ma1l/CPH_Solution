#include <bits/stdc++.h>
using namespace std;
int main() {
	int n;
	cin >> n;
	if (n==1){
		cout << 1;
	}
	else if (n>3){
	int arr[n];
	int a=0,b=n/2; 
	for (int i=0;i<n;i++)
	{
		if ((i+1)%2==0)
		{
			arr[a]=i+1;
			a++;
		}
		else {
			arr[b]=i+1;
			b++;
		}
	}
	for (int k=0;k<n;k++){
		cout << arr[k] << " ";
		}	
	}	
	else {
		cout << "NO SOLUTION";
	}
	cout << '\n';
 
}

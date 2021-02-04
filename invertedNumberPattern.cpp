/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
4444
333
22
1
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter n:";
	cin>>n;
	int i=n;
	while(i>=1) {
		int j=1;
		while(j<=i) {
			cout<<i;
			j++;
		}
		cout<<endl;
		i--;
	}
	return 0;
}

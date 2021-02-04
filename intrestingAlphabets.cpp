/*
Print the following pattern for the given number of rows.
Pattern for N = 5
E
DE
CDE
BCDE
ABCDE
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter n:";
	cin>>n;
	int i=n;
	while(i>=1) {
		int j=i;
		while(j<=n) {
			char ch='A'+j-1;
			cout<<ch;
			j++;
		}
		cout<<endl;
		i--;
	}
	return 0;
}

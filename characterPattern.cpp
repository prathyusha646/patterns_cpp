/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
A
BC
CDE
DEFG
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter n:";
	cin>>n;
	int i=1;
	while(i<=n) {
		int j=1;
		char ch1='A'+i-1;
		while(j<=i) {
			char ch2=ch1+j-1;
			cout<<ch2;
			j++;
		}
		cout<<endl;
		i++;
	}
	return 0;
}

/*
Print the following pattern for the given N number of rows.
Pattern for N = 4
1
21
321
4321
*/

#include<iostream> 
using namespace std;
int main() {
	int n;
	cout<<"Enter n:";
	cin>>n;
	int i=1;
	while(i<=n) {
		int j=i;
		while(j>=1) {
			cout<<j;
			j--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}
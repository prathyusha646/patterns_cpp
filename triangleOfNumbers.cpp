/*
Pattern for N = 4
   1
  232
 34543
4567654
The dots represent spaces.
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter n:";
	cin>>n;
	int i=1;
	while(i<=n) {
		int space=1;
		while(space<=n-i) {
			cout<<" ";
			space++;
		}
		int j=1;
		int val=i;
		while(j<=i) {
			cout<<val;
			val++;
			j++;
		}
		val=2*(i-1);
		while(val>=i) {
			cout<<val;
			val--;
		}
		cout<<endl;
		i++;
	}
	return 0;
}

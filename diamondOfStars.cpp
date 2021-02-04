/*
Print the following pattern for the given number of rows.
Note: N is always odd.
Pattern for N = 5
  *
 ***
*****
 ***
  *
The dots represent spaces.
*/

#include<iostream>
using namespace std;
int main() {
	int n;
	cout<<"Enter n:";
	cin>>n;
	int i=1;
	//top half starts 
	/*
	  *
	 ***
	*****
	*/
	while(i<=(n/2)+1) {
		int space=1;
		while(space<=(n/2)+1-i) {
			cout<<" ";
			space++;
		}
		int j=1;
		while(j<=(2*i)-1) {
			cout<<"*";
			j++;
		}
		cout<<endl;
		i++;
	}
	// half stars complete
	//start bottom level stars
	/*
	 ***
	  *
	*/
	i=1;
	while(i<= n/2) {
		int space=1;
		while(space<=i) {
			cout<<" ";
			space++;
		}
		int j= 2*((n/2)-i+1)-1;
		while(j>=1) {
			cout<<"*";
			j--;
		}
		cout<<endl;
		i++;
	}
	//complete bottom level stars
	return 0;
}

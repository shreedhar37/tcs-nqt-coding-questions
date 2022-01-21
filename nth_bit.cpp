/*

 Given a number N and nth position, find its nth bit from it's binary.

 For example 
 Input : N =  13
         position = 3
 
 Output: 1
 
 
*/

#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, position;

	cin >> n >> position;

	int mask = 1 << position; 

	if (n & mask) cout << 1 << endl;
	else cout << 0 << endl;

	return 0;
}

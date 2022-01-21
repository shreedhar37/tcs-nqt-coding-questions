/*

Set the K-th bit of a given number

Input : n = 10, k = 2
Output : 14
(10)10 = (1010)2
Now, set the 2nd bit from right.
(14)10 = (1110)2
2nd bit has been set.

Input : n = 15, k = 3
Output : 15
3rd bit of 15 is already set.


*/


#include<bits/stdc++.h>
using namespace std;

int main(){

	int n, position;

	cin >> n >> position;

	int mask = 1 << position;
 

	int ans = n  | mask;

	cout << ans; 

	return 0;
}


 


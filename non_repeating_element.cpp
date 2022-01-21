/* 
given array of size n, find only non-repeating element in array where every other elements repeats twice  

for example:
Input : 3 
        1 2 1 
Output: 2 

*/
#include<bits/stdc++.h>
using namespace std;


int main() {
    
    int n;
    cin >> n;
    
    int a[n];
    
    for(int i = 0; i < n; ++i) cin >> a[i];
    
    int result = 0;
    
    for(int i = 0; i < n ; ++i) result = result ^ a[i];
    
    cout << result;
}

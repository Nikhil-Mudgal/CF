#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int tc{};
	int n,m,a,b,c,d;
	cin >> tc >> n>> m >> a >> b >> c >> d;
	int dr = 1;
	int dc = 1;
	int ans = 0 ;
	while (a != c and b != d){
		a += dr;
		b += dc;
		if (a > n){
			a-= 2;dr= -1;
		}
		// cout << a << " " << dr << endl;
		// cout << b << " " << dc << endl;
		if (a <= 0){
			a+=2;dr= 1;
		}
		cout << a << " " << dr << endl;
		cout << b << " " << dc << endl;
		if (b > m ){
			b -= 2; dc = -1;}
		if (b <= 0){
			b += 2; dc =1;
		}
		ans++;
	}
	cout << ans << endl;

	cout << endl;
	return 0;
}




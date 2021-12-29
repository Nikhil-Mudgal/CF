#include <bits/stdc++.h>
#include <iostream>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

int main(){
	int tc{};
	cin >> tc;
	while(tc--){
		long long n,l,r,k,total{0};
		vector <long long > v {};
		vector<long long > b{};
		cin >> n >> l >> r >>k;
		while (n--){
			int temp;
			cin >> temp;
			b.push_back(temp);}
		sort(b.begin(),b.end());
		for (int i{0};i < b.size(); i++){
			if (b[i]  >= l and b[i] <= r){
				total += b[i];
					if (total <= k){
						v.push_back(b[i]);}
					else if (total > k){
                        total-= b[i];
				}
			}
		}
		cout << v.size() << endl;
	}
	// cout << "ok" << endl;
		
	cout << endl;
	return 0;
	
}




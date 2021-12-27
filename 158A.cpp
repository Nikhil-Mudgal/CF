#include <iostream>
#include <vector>
using namespace std;


int main() {
	// your code goes here
	unsigned int  tc{},val{},count{};
    vector <int> v{};
    cin >> tc >> val;
    while (tc--){
        unsigned int temp;
        cin >> temp;
        v.push_back(temp);
        }
    for(auto el : v){
        if (el != 0){
            if (el >= v.at(val-1)){
                count++;
            }
        else if (el == 0){
            count = count;}
        }
    }cout << count << endl; 
    count = 0;
    cout << endl;
    return 0;
}

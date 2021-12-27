#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main() {
	// your code goes here
	int counter{0};
    string s{};
    cin >> s;
    for (size_t i{0};i < s.length();i++){
        bool appear = false;
        for(size_t j{0}; j < i ;j++){
            if (s[j] == s[i]){
                appear = true;
                break;
                }
        }
        if (!appear){
            counter++;}
    }
    if (counter % 2 == 0){
        cout << "CHAT WITH HER!" << endl;
        }
    else {
        cout << "IGNORE HIM" << endl;}
    counter =0;
    
    cout << endl;
    return 0;
}

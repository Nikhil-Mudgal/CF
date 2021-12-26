#include <iostream>
#include <vector>
using namespace std;


int main(){
    int t{0},counter{0},temp{0};
    cin >> t;
    for(int i{0};i<t ;i++){
        int x{},y{},z{};
        cin >> x ;
        cin >> y;
        cin >> z;
        int arr[]{x,y,z};
        for (auto i : arr){
            if (i == 1){
                temp ++;
                }
            }
        if (temp >= 2){
            counter++;}
        temp = 0;
    }cout << counter << endl;
    counter = 0;
    cout << endl;
    return 0;
}

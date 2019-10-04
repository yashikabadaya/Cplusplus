#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

string isArmstrong(int x){
    int original_no = x;
    int sum = 0;
    while(x){
        sum += pow((x % 10), 3);
        x = x / 10; 
    }
    if(sum == original_no){
        return "Yes";
    }
    return "No";
}


int main() {
    int t, x;
    cin >> t;
    for(int i=0; i < t; i++){
        cin >> x;
        cout << isArmstrong(x) << '\n';
    }
    return 0;
}

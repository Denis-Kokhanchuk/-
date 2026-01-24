#include <iostream>
using namespace std;

int main(){
    int s, k, a, b;
    cin >> s >> k >> a >> b;

    for(int x = 1; x <= a; x++){
        int y = a - x * k;
        if(y < 0) continue;
        int numerator = b - a * s;
        if(numerator % x != 0)continue;
        int n = k * s - numerator / x;
        if(n > 0){
            cout << n;
            return 0;
        }
    }

    cout << -1;
}

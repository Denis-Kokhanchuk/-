#include <bits/stdc++.h>
using namespace std;

void sortArry(vector<int>& a){
    int n = a.size();
    for(int i = 0; i < n - 1;i++){
            for(int j = 0; j < n - i - 1;j++){
                if(a[j] > a[j + 1]){
                    swap(a[j], a[j + 1]);
                }
            }
    }
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++){
        cin >> a[i];
    }

    sortArry(a);

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }


    return 0;
}

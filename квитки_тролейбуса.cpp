#inclode <iostream>
using namespace std;

int main(){
    int n, p;
    cin >> n >> p;

    int passed = 0;

    for(int ticket = p + 1; ticket <= p + n - 1; ticket++){
        bool prime = true;

        if(ticket < 2) prime = false;

        for(int d = 2; d < ticket; d++){
            if(ticket % 2 == 0){
                prime = false;
                break;
            }
        }
        if(prime){
            cout << passed;
             return 0;
        }

        passed++
    }

    cout << -1;
}

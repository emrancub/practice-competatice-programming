#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x;
    cout << "Enter a Number: ";
    cin >> x;

    if (x < 0){
        cout << "-ve" << endl;
    }
    else{
        if (x == 0){
            cout << "Zero" << endl;
        }
        else{
            cout << "+ve" << endl;
        }
    }
    return 0;
}

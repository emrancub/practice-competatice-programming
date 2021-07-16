#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    int n;
    cin >> n;
    for(int i=1; i<=n ; i++){
        cin >> num;
        if(num%2==0){
            cout << "Even" << endl;
        }
        else{
            cout << "Odd" << endl;
        }
    }
    return 0;
}

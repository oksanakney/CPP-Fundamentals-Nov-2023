#include <iostream>
using namespace std;

const int MAX_SIZE = 99;

int main() {
    
    string arr[MAX_SIZE];
    
    int actualSize;
    cin >> actualSize;
    for(int cnt = 0; cnt < actualSize; cnt++)
        cin >> arr[cnt];
        
    for (int cnt = actualSize -1; cnt >= 0; cnt--)  
        cout << arr[cnt] << ' ';
        
    cout << endl;
    
    return 0;
}

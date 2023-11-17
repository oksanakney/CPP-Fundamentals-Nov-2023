#include <iostream>

using namespace std;

int main() {
   int actualSize;
   cin >> actualSize;
   
   int arr[actualSize]; // C++ 0x11
   
   for (int cnt = 0; cnt < actualSize; cnt++)
   cin >> arr[cnt];
   
   int evenSum = 0;
   for(int number: arr)
   
   if ((number%2) == 0)
    evenSum += number;
    
    cout << evenSum << endl;
    
    return 0;
}
#include <iostream>

using namespace std;

const int MAX_SIZE = 99;

int main() {
   int arr[MAX_SIZE]; // Classic C / C++   
    
   int actualSize;
   cin >> actualSize;
   
   for (int cnt = 0; cnt < actualSize; cnt++)
   cin >> arr[cnt];
   
   int evenSum = 0;
   int oddSum = 0;
   
   for(int cnt = 0; cnt < actualSize; cnt++) {
       int number = arr[cnt];
       if ((number%2) == 0)
           evenSum += number;
       else 
           oddSum += number;
   }
    
    cout << evenSum - oddSum << endl;
    
    return 0;
}
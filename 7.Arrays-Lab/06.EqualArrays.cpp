06.

#include <iostream>

using namespace std;

const int MAX_SIZE = 99;

void readArr(int arr[], int actualSize) {
    for(int cnt = 0; cnt < actualSize; cnt ++)
        cin >> arr[cnt];
}

int main() {
    
    int arr1[MAX_SIZE]; // Classic C / C++
    int arr2[MAX_SIZE];
    
    int actualSize;
    cin >> actualSize;
    
    readArr(arr1, actualSize);
    readArr(arr2, actualSize);
    
    int arrSum = 0;
    
    for(int cnt = 0; cnt < actualSize; cnt++) {
       int number = arr1[cnt];
       
       if (number != arr2[cnt]) {
           cout << "Arrays are not identical. Found difference at " << cnt << " index." << endl;
           return 0;
           } else {
               
           }
           arrSum += number;
    }
    
    cout << "Arrays are identical. Sum: " << arrSum << endl;
 
    
    return 0;
}
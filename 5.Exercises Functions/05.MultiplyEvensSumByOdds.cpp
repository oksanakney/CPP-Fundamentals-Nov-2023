#include <iostream>

using namespace std;

int main(void)
{
    long number;
    
    cin >> number;
    
    unsigned long sumOdd = 0;
    unsigned long sumEven =0;
    
    while (number) {
        int singles = number % 10;
        
        if (singles % 2)
            sumOdd += singles;
        else 
            sumEven += singles;
            
        number = number / 10;
    }
    
    cout << sumEven*sumOdd << endl;
}
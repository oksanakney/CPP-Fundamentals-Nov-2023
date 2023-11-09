#include <iostream>
using namespace std;

int main(int argc, char *argv[]) 
{
    while (true) {
    int number;
    cin >> number;
    if ((number % 2) == 0){
    
        if(number < 0)
        
            number = number * (-1);
        cout << "The number is: " << number << endl;
        break;
    } else 
    cout << "Please write an even number." << endl;
    }
     return 0;
}
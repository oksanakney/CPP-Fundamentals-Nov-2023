#include <iostream>

using namespace std;

int main()
{
    float number1;
    float number2;
    float number3;
    cin >> number1;
    cin >> number2;
    cin >> number3;
    
    
    if ((number1 * number2 * number3) >= 0)
    {
        cout <<"+"<< endl;
    } else
    
    cout <<"-"<< endl;

    return 0;
}
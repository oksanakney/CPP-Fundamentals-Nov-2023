#include <iostream>

using namespace std;

int main()
{
    double grade;
    cin >> grade;
    
    if (grade > 2.99)
        cout << "Passed!";
    else 
        cout << "Failed!";
}
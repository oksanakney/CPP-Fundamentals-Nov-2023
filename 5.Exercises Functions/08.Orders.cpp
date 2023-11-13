#include <iostream>
#include <iomanip>

using namespace std;
/*
    • coffee – 1.50
    • water – 1.00
    • coke – 1.40
    • snacks – 2.00
*/

double calculateOrder (string product, int quantity) {
    
    double price;
    switch (product[2]) {
        case 'f':
            price = 1.5; break;
        case 't':
            price = 1.0; break;
        case 'k':
            price = 1.4; break;
        case 'a':
            price = 2.0; break;
    }
    
    return price * quantity;
}

int main(void)
{
    string product;
    int quantity;
    
    cin >> product >> quantity;
    
    cout << fixed << setprecision(2) << calculateOrder (product, quantity) << endl;  
}
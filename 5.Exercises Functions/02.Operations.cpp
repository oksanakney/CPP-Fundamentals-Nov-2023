#include <iostream>

using namespace std;

int add(int x, int y) {
    return x+y;
}

int substract(int x, int y) {
    return x-y;
}

int multiply(int x, int y) {
    return x*y;
}

int divide(int x, int y) {
    return x/y;
}
int main()
{
    int x, y;
    
    cin >> x >> y;
    
    char operation;
    cin >> operation;
    
    switch(operation){
        case '+': cout << add(x,y) << endl; break;
        case '-': cout << substract(x,y) << endl; break;
        case '*': cout << multiply(x,y) << endl; break;
        case '/': cout << divide(x,y) << endl; break;
    }    
}
#include <iostream>
#include<ios>
#include<iomanip>

using namespace std;

double factorial(int x) {
    double result = 1;
    
    for (int current = 2; current <=x; current++)
    result *= current;
    
    return result;
}
int main()
{
    int a, b;
    
    cin >> a >> b;
    
    double aF = factorial(a);
    double bF = factorial(b);
    
    double result = aF/bF;
    
    cout << fixed << setprecision(2) << result << endl;    
}
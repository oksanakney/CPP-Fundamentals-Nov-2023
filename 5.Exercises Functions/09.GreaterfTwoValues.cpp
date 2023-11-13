#include <iostream>
#include <iomanip>

using namespace std;

void compareInts() {
    int a1, a2;
    
    cin >> a1 >> a2;
    
    if (a1 >= a2)
        cout << a1 << endl;
    else
        cout << a2 << endl;
}
void compareChars() {
    char a1, a2;
    
    cin >> a1 >> a2;
    
    if (a1 >= a2)
        cout << a1 << endl;
    else
        cout << a2 << endl;
}
void compareString() {
    string a1, a2;
    
    cin.ignore(); 
    getline(cin, a1);
    getline(cin, a2);
    
    cin >> a1 >> a2;
    
    if (a1 >= a2)
        cout << a1 << endl;
    else
        cout << a2 << endl;
}

int main(void)
{
    string type;
    
    cin >> type;
    
    if (type == "int")
        compareInts();
    if (type == "char")
        compareChars();
    if (type == "string")
        compareString();
}
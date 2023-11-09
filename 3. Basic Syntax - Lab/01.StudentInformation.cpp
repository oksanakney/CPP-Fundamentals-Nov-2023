#include <iomanip>
#include <iostream>

using namespace std;

int main()
{      
    string name;
    int age;
    double grade;
    cin >> name >> age >> grade;
    cout << "Name: " << name<< ", " <<  "Age: " << age << ", " << "Grade: " << fixed << setprecision(2)<< grade;
}
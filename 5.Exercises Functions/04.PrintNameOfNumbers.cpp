#include <iostream>

using namespace std;

string numberToWord(int number) {
    number = number % 10; // 8927 => 7
    
    switch(number) {
        case 0: return "zero";
        case 1: return "one"; 
        case 2: return "two";
        case 3: return "three";
        case 4: return "four";
        case 5: return "five";
        case 6: return "six";
        case 7: return "seven";
        case 8: return "eight";
        case 9: return "nine";
    }
    return "";
}

string decimalToWord(int number) {
    number = number % 10; // 8927 => 7
    
    switch(number) {
        
        case 1: return "ten"; 
        case 2: return "twenty";
        case 3: return "thirty";
        case 4: return "forty";
        case 5: return "fifty";
        case 6: return "sixty";
        case 7: return "seventy";
        case 8: return "eighty";
        case 9: return "ninety";
    }
    
    return "";
}

string teensToWord(int number) {
    
    switch(number) {
        
        case 11: return "eleven"; 
        case 12: return "twelve";
        case 13: return "thirteen";
        case 14: return "fourteen";
        case 15: return "fifteen";
        case 16: return "sixteen";
        case 17: return "seventeen";
        case 18: return "eighteen";
        case 19: return "nineteen";
    }
    return "";
}


void printNumber (int n) {
    if (n==0) {
        cout << "zero" << endl;
        return;
    }
    
    
    int n1 = n % 10; // edinici;
    int n2 = (n / 10) % 10; // desetici
    int n3 = (n / 100) % 10; // stotici
    int n4 = (n / 1000); // hiliadi
    
    if (n4) {
        
        cout << numberToWord(n4) << " thousand ";
    }
    
    if (n3) {
        cout << numberToWord(n3) << " hundred ";
    }
    
    if (n2 >= 2) {
        cout << decimalToWord(n2) << " ";
    }
    
    if (n2 == 1) {
        cout << teensToWord(n2*10 + n1);
    } else {
        if (n1)
        cout << numberToWord(n1);
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    printNumber(n);
}
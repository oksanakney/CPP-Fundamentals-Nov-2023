#include <iostream>

using namespace std;

bool isVowel(char c) {
    c = tolower(c);
    
    switch(c) {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'y':
            return true;
        default:
            return false;
    }
}

int vowelCount(string input) {
    
    int vowelCount = 0;
    
    for (int c = 0; c<input.length(); c++)
        if (isVowel(input[c]))
        vowelCount++;
    return vowelCount;
}
int main()
{
   string input;
   
   cin >> input;
   cout << vowelCount(input) << endl;
}
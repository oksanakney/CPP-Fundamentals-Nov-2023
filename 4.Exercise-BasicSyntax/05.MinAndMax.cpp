#include <iostream>
#include <cmath>
#include <climits>

using namespace std;

int main()
{
    int n;
   
    cin >> n; 
   
    int current; // here we can store the current number
 
    
 
    int max_number = INT_MIN;
    int min_number = INT_MAX;
    
    for(int count = 1; count <= n; count++){
        int current;
        cin>> current;
        
        if (current > max_number)
        max_number = current;
        
        if (current < min_number)
        min_number = current;
        
    }
    
   
   cout << min_number<< ' ' << max_number;
   
   return 0;   
}
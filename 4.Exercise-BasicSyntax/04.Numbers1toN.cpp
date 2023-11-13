#include <iostream>
#include <cmath>

using namespace std;

int main()
{
   int n;
   
   cin >> n;
   
   int counter = 1;
   while(counter<= n){
       cout << counter << ' ';
       counter++;
   }
   
   cout << endl;
   
   return 0;
   
}
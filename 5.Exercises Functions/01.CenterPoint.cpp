#include <iostream>

using namespace std;

double calculateDistance(int x, int y)
{
    return x*x + y*y;
}

void printPoint(double x, double y)
{
    cout << '(' << x << ", " << y << ')' << endl;
}


void PrintSmallerDistanceToCenter (double x1, double y1, double x2, double y2)
{
    
    double dx1, dx2;
    
    dx1 = calculateDistance(x1, y1);
    dx2 = calculateDistance(x2, y2);
    
    if (dx1 < dx2)
		printPoint (x1, y1);
    else
		printPoint (x2, y2);
}

int main()
{
    double x1, y1, x2, y2;
    
    cin >> x1 >> y1 >> x2 >> y2;

    
    PrintSmallerDistanceToCenter(x1, y1, x2, y2);
}
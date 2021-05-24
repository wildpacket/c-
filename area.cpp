area.cpp

#include <iostream>
#include <cmath>
using namespace std;

float area(int radius) {
   return M_PI * (radius * radius);
}
int main () {
   cout << "Area of a circle with radius 6 unit is: " << area(6);
}
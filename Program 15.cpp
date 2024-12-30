#include <iostream> 
#include <cmath> 
using namespace std; 
const double PI = 3.14159; 
void calculateAreaAndPerimeter(double radius, double &area, double 
&perimeter) { 
area = PI * pow(radius, 2); 
perimeter = 2 * PI * radius; 
} 
int main() { 
double radius, area, perimeter; 
cout<<"Name:Rana Rameez Mushtaq"<<endl; 
cout<<"Reg no:BCY243023"<<endl; 
cout << "Enter the radius of the circle: "; 
cin >> radius; 
calculateAreaAndPerimeter(radius, area, perimeter); 
cout << "Area: " << area << endl; 
cout << "Perimeter: " << perimeter << endl; 
return 0; 
}
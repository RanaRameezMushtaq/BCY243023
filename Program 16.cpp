#include <iostream> 
#include <cmath> 
using namespace std; 
void findRoots(double a, double b, double c, double &root1, double &root2) { 
double discriminant = b * b - 4 * a * c; 
    if (discriminant > 0) { 
        root1 = (-b + sqrt(discriminant)) / (2 * a); 
        root2 = (-b - sqrt(discriminant)) / (2 * a); 
    } else if (discriminant == 0) { 
        root1 = root2 = -b / (2 * a); 
    } else { 
        root1 = root2 = 0;  
    } 
} 
 
int main() { 
    double a, b, c, root1, root2; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter coefficients a, b and c: "; 
    cin >> a >> b >> c; 
 
    findRoots(a, b, c, root1, root2); 
 
    if (root1 == root2 && root1 == 0) { 
        cout << "No real roots." << endl; 
    } else { 
cout << "Roots are: " << root1 << " and " << root2 << endl; 
} 
return 0; 
} 
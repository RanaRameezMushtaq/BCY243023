#include <iostream> 
using namespace std; 
int main() { 
double number; 
int factorial = 1; 
cout<<"Name:Rana Rameez Mushtaq"<<endl; 
cout<<"Reg no:BCY243023"<<endl; 
cout << "Enter a positive integer: "; 
cin >> number; 
for(int i = 1; i <= number; ++i) { 
factorial *= i; 
} 
cout << "Factorial of " << number << " = " << factorial << endl; 
return 0; 
} 
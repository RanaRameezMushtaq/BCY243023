#include <iostream> 
using namespace std; 
int main() { 
int number, sum = 0; 
cout<<"Name:Rana Rameez Mushtaq"<<endl; 
cout<<"Reg no:BCY243023"<<endl; 
cout << "Enter a number: "; 
cin >> number; 
while (number != 0) { 
sum += number % 10; 
number /= 10; 
} 
cout << "Sum of digits: " << sum << endl; 
return 0; 
} 
#include <iostream> 
using namespace std; 
 
int gcd(int a, int b) { 
    if (b == 0) 
        return a; 
    return gcd(b, a % b); 
} 
 
int main() { 
    int num1, num2; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter two numbers: "; 
    cin >> num1 >> num2; 
    cout << "GCD of " << num1 << " and " << num2 << " is " << gcd(num1, num2) << 
endl; 
    return 0; 
}
#include <iostream> 
using namespace std; 
bool isPrime(int num) { 
    if (num <= 1) return false; 
    for (int i = 2; i <= num / 2; i++) { 
        if (num % i == 0) return false; 
    } 
    return true; 
} 
 
int main() { 
    int number; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter a number: "; 
    cin >> number; 
 
    if (isPrime(number)) { 
        cout << number << " is a prime number." << endl; 
    } else { 
cout << number << " is not a prime number." << endl; 
} 
return 0; 
}
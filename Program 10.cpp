#include <iostream> 
using namespace std; 
int main() { 
int decimal, remainder; 
string binary = ""; 
cout<<"Name:Rana Rameez Mushtaq"<<endl;
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter a decimal number: "; 
    cin >> decimal; 
 
    while (decimal > 0) { 
        remainder = decimal % 2; 
        binary = to_string(remainder) + binary; 
        decimal /= 2; 
    } 
 
    cout << "Binary representation: " << binary << endl; 
    return 0; 
} 
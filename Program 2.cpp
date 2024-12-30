#include <iostream> 
using namespace std; 
int main() { 
double amount; 
int choice; 
cout<<"Name:Rana Rameez Mushtaq"<<endl; 
cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter the amount in USD: "; 
    cin >> amount; 
 
    cout << "Select the currency to convert to:"<<endl; 
    cout << "1. Euro"<<endl; 
    cout << "2. British Pound"<<endl; 
    cout << "3. Japanese Yen"<<endl; 
    cout << "4. Australian Dollar"<<endl; 
    cout << "Enter your choice (1-4):"<<endl; 
    cin >> choice; 
 
    switch (choice) { 
        case 1: 
            cout << "Amount in Euro: " << amount * 0.85 << endl; 
            break; 
        case 2: 
            cout << "Amount in British Pound: " << amount * 0.75 << endl; 
            break; 
        case 3: 
            cout << "Amount in Japanese Yen: " << amount * 110.0 << endl; 
            break; 
        case 4: 
            cout << "Amount in Australian Dollar: " << amount * 1.35 << endl; 
            break; 
        default: 
            cout << "Invalid choice." << endl; 
            break; 
    } 
 
    return 0; 
}
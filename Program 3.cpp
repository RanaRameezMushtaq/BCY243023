#include <iostream> 
using namespace std; 
 
int main() { 
    double value; 
    int choice; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Unit Conversion Menu:"<<endl; 
    cout << "1. Kilometers to Miles"<<endl; 
    cout << "2. Kilograms to Pounds"<<Endl; 
    cout << "Choose an option (1 or 2): "<<endl; 
    cin >> choice; 
    switch (choice) { 
        case 1: 
            cout << "Enter kilometers: "; 
            cin >> value; 
            cout << value << " kilometers is equal to " << value * 0.621371 << " 
miles.\n";
            break; 
        case 2: 
            cout << "Enter kilograms: "; 
            cin >> value; 
            cout << value << " kilograms is equal to " << value * 2.20462 << " 
pounds.\n"; 
            break; 
        default: 
            cout << "Invalid choice.\n"; 
            break; 
    } 
    return 0; 
} 
#include <iostream> 
using namespace std; 
int main() { 
    char operation; 
    float num1, num2; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter operator (+, -, *, /): "; 
    cin >> operation; 
    cout << "Enter two operands: "; 
    cin >> num1 >> num2; 
    switch (operation) { 
        case '+': 
            cout << num1 << " + " << num2 << " = " << num1 + num2; 
            break; 
        case '-': 
            cout << num1 << " - " << num2 << " = " << num1 - num2; 
            break; 
        case '*': 
            cout << num1 << " * " << num2 << " = " << num1 * num2; 
            break; 
        case '/': 
            if (num2 != 0) 
                cout << num1 << " / " << num2 << " = " << num1 / num2; 
            else 
                cout << "Error! Division by zero."; 
            break; 
        default: 
            cout << "Error! Operator is not correct."; 
            break; 
    } 
    return 0; 
}
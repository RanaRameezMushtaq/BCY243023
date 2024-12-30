#include <iostream> 
using namespace std; 
int main() { 
int rows, cols; 
cout<<"Name:Rana Rameez Mushtaq"<<endl; 
cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter number of rows: "; 
    cin >> rows; 
    cout << "Enter number of columns: "; 
    cin >> cols; 
 
    int matrix[rows][cols]; 
    int sum = 0; 
 
    cout << "Enter elements of the matrix:\n"; 
    for (int i = 0; i < rows; i++) { 
        for (int j = 0; j < cols; j++) { 
            cin >> matrix[i][j]; 
            sum += matrix[i][j]; 
        } 
    } 
 
    cout << "Sum of all elements in the matrix: " << sum << endl; 
    return 0; 
}
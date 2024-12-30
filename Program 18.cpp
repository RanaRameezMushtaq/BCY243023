#include <iostream> 
using namespace std; 
void reverseArray(int arr[], int size) { 
for (int i = 0; i < size / 2; i++) { 
int temp = arr[i]; 
arr[i] = arr[size - i - 1]; 
arr[size - i - 1] = temp; 
    } 
} 
 
int main() { 
    int size; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter the size of the array: "; 
    cin >> size; 
     
    int* arr = new int[size]; 
    cout << "Enter the elements of the array: "; 
    for (int i = 0; i < size; i++) { 
        cin >> arr[i]; 
    } 
 
    reverseArray(arr, size); 
 
    cout << "Reversed array: "; 
    for (int i = 0; i < size; i++) { 
        cout << arr[i] << " "; 
    } 
delete[] arr; 
return 0; 
} 
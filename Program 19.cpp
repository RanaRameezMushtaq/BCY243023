#include <iostream> 
using namespace std; 
void countEvenElements(int arr[], int size) { 
    int count = 0; 
    for (int i = 0; i < size; i++) { 
        if (arr[i] % 2 == 0) { 
            count++; 
        } 
    } 
    cout << "Number of even elements: " << count << endl; 
} 
 
int main() { 
    int size; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter the size of the array: "; 
    cin >> size; 
     
    int arr[size]; 
    cout << "Enter the elements of the array: "; 
    for (int i = 0; i < size; i++) { 
        cin >> arr[i]; 
    } 
countEvenElements(arr, size); 
return 0; 
}
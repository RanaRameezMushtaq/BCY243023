#include <iostream> 
using namespace std; 
void sortDescending(int arr[], int n) { 
    for (int i = 0; i < n - 1; i++) { 
        for (int j = 0; j < n - i - 1; j++) { 
            if (arr[j] < arr[j + 1]) { 
                swap(arr[j], arr[j + 1]); 
            } 
        } 
    } 
} 
 
int main() { 
    int n; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter the number of elements: "; 
    cin >> n; 
    int arr[n]; 
     
    cout << "Enter the elements: "; 
    for (int i = 0; i < n; i++) { 
        cin >> arr[i]; 
    } 
     
    sortDescending(arr, n); 
     
    cout << "Sorted array in descending order: "; 
    for (int i = 0; i < n; i++) { 
        cout << arr[i] << " "; 
    } 
     
    return 0; 
} 
#include <iostream> 
using namespace std; 
int main() { 
    int n; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter the number of terms: "; 
    cin >> n; 
 
    int t1 = 0, t2 = 1, nextTerm; 
 
    cout << "Fibonacci Series: " << t1 << ", " << t2 << ", "; 
 
    for (int i = 3; i <= n; ++i) { 
        nextTerm = t1 + t2; 
        cout << nextTerm << ", "; 
        t1 = t2; 
        t2 = nextTerm; 
    } 
    return 0; 
} 
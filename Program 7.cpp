#include <iostream> 
#include <string> 
using namespace std; 
int main() { 
string input; 
int vowelCount = 0; 
cout<<"Name:Rana Rameez Mushtaq"<<endl; 
cout<<"Reg no:BCY243023"<<endl; 
cout << "Enter a string: "; 
getline(cin, input); 
    for (char c : input) { 
        c = tolower(c); 
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') { 
            vowelCount++; 
        } 
    } 
 
    cout << "Number of vowels: " << vowelCount << endl; 
 
    return 0; 
} 
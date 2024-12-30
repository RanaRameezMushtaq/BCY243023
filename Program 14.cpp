#include <iostream> 
using namespace std; 
bool areStringsEqual(const string& str1, const string& str2) { 
return str1 == str2; 
} 
int main() { 
    string string1, string2; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter first string: "; 
    getline(cin, string1); 
    cout << "Enter second string: "; 
    getline(cin, string2); 
 
    if (areStringsEqual(string1, string2)) { 
        cout << "The strings are equal." << endl; 
    } else { 
        cout << "The strings are not equal." << endl; 
    } 
    return 0; 
} 
 

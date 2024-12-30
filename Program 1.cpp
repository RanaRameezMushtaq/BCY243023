#include <iostream> 
using namespace std;  
int main() { 
    char ch; 
    cout<<"Name:Rana Rameez Mushtaq"<<endl; 
    cout<<"Reg no:BCY243023"<<endl; 
    cout << "Enter a character: "; 
    cin >> ch; 
    switch (tolower(ch)) { 
        case 'a': 
        case 'e': 
        case 'i': 
        case 'o': 
        case 'u': 
            cout << ch << " is a vowel." << endl; 
            break; 
        case 'b': 
        case 'c': 
        case 'd': 
        case 'f': 
        case 'g': 
        case 'h': 
        case 'j': 
        case 'k': 
        case 'l': 
        case 'm': 
        case 'n': 
        case 'p': 
        case 'q': 
        case 'r': 
        case 's': 
        case 't': 
        case 'v': 
        case 'w': 
        case 'x': 
        case 'y': 
        case 'z': 
            cout << ch << " is a consonant." << endl; 
            break; 
        default: 
            cout << "Invalid input." << endl;  
} 
return 0; 
}
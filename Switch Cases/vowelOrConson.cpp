#include <iostream>
using namespace std;
int main() {
     
     //Write a program to identify whether a charater is vowel or consonant
     char letter;
     cout<<"Enter a letter :- "<<endl ;
     cin >> letter;
    switch (letter)
    {
    case 'a':
        cout<<"Vowel";
        break;

    case 'e':
        cout<<"Vowel";
        break;

    case 'i':
        cout<<"Vowel";
        break;

    case 'o':
        cout<<"Vowel";
        break;

    case 'u':
        cout<<"Vowel";
        break;
    
    default:
    cout<<"Consonant";
        break;
    }

    return 0;
}
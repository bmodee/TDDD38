/* 
Date: 2020-22-02
Created by: Björn Modée
*/

#include <iostream>
#include <string>
using namespace std;

int a, b, c, d;
float x, y;
char r, s, t;
string word, txt, w1, w2, w3;

int main()
{
    
    cout << "Enter one integer: ";
    cin >> a;
    cout << "You entered the number: " << a << endl;

    //cin ignores spaces
    cout << "Enter four integers: ";
    cin >> a >> b >> c >> d;
    cout << "You entered the numbers: " << a << " " << b << " " << c << " " << d << " " << endl;


    cout << "Enter one integer and one real number: ";
    cin >> a >> y;
    cout << "The real is: " << y << endl;
    cout << "The integer is: " << a << endl;

    cout << "Enter one real number and one integer: ";
    cin >> y >> a;
    cout << "The real is: " << y << endl;
    cout << "The integer is: " << a << endl;

    
    // A better sulotion that combines the 2 above 
    cout << "Enter one integer and one real number in any order: ";
    cin >> x >> y;
    if (x == static_cast<int>(x)){
        cout << "The real is: " << y << endl;
        cout << "The integer is: " << x << endl;
    }else {
        cout << "The real is: " << x << endl;
        cout << "The integer is: " << y << endl;
    }
    

    cout << "Enter one character: ";
    cin >> r;
    cout << "You entered the character: " << r << endl;

    cout << "Enter a word: ";
    cin >> word;
    int len = word.length();
    cout << "The word '" << word << "' has " << len << " character(s)." << endl;

    cout << "Enter an integer and a word: ";
    cin >> a >> word;
    cout << "You entered ’"<< a <<"’ and ’" << word <<"’." << endl;

    cout << "Enter an character and a word: ";
    cin >> r >> word;
    cout << "You entered the string ’"<< word <<"’ and the character ’" << r <<"’." << endl;

    cout << "Enter a word and a real number: ";
    cin >> word >> x;
    cout << "You entered the string ’"<< word <<"’ and the real number ’" << x <<"’." << endl;

   
    cout << "Enter a text-line: " << endl;
    getline(cin, txt);
    cout << "You entered: " << txt << endl;

    cout << "Enter a second text-line: " << endl;
    getline(cin, txt);
    cout << "You entered: " << txt << endl;

    cout << "Enter three words ";
    cin >> w1 >> w2 >> w3;
    cout << "You entered: " << w1 << " " << w2 << " " << w3 << endl;

}


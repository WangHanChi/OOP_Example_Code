// chartype.cpp -- the char type
#include <iostream>
int main( )
{
    using namespace std;
    char ch;        // declare a char variable
	
    cout << "Enter a character: " << endl;
    cin >> ch;
	int c = ch;
    cout << "Hola! ";
    cout << "Thank you for the " << ch << " character." << endl;
	cout << "Thank you for the " << c << " integer " << endl;
    // cin.get();
    // cin.get();
	system( "pause" );
    return 0;
}

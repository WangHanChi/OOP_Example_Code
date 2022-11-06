// fltadd.cpp -- precision problems with float
#include <iostream>
#include <iomanip>
int main()
{
    using namespace std;
    float a = 2.34E+040;
    float b = a + 1.0f;

	cout << setprecision(50);
    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    // cin.get();
	system( "pause" );
    return 0; 
}

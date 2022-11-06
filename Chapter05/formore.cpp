// formore.cpp -- more looping with for
#include <iostream>
const int ArSize = 16;      // example of external declaration
using namespace std;
int main()
{
    long long factorials[ArSize];
	factorials[0] = factorials[1] = 1;
	cout << sizeof (long long) << '\t' << sizeof (factorials[0]) 
		 << '\t' << sizeof(factorials) << endl;
    for (int i = 2; i < ArSize; i++)
        factorials[i] = i * factorials[i-1];
    for (int i = 0; i < ArSize; i++)
        std::cout << i << "! = " << factorials[i] << std::endl;
	// std::cin.get();
	system("PAUSE");
    return 0;
}

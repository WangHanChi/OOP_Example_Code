// dowhile.cpp -- exit-condition loop
#include <iostream>
int main()
{
    using namespace std;
    int n;

    cout << "Enter numbers in the range 1-10 to find ";
    cout << "my favorite number\n";
    do
    {
        cin >> n;       // execute body
    } while (n != 7);   // then test
    cout << "Yes, 7 is my favorite.\n" ;
	/*
	while(cin >> n)
	{
		if(n == 7)
			break;
	}
	cout << "Yes, 7 is my favorite.\n" ;
	*/
    // cin.get();
    // cin.get();
	system("PAUSE");
    return 0; 
}

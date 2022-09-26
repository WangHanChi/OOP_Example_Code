// waiting.cpp -- using clock() in a time-delay loop
#include <iostream>
#include <ctime> // describes clock() function, clock_t type
int main()
{
    using namespace std;
    cout << "Enter the delay time, in seconds: ";
    float secs;
    cin >> secs;
	cout << "CLOCKS_PER_SEC = " <<  CLOCKS_PER_SEC << endl;
    clock_t delay = secs * CLOCKS_PER_SEC;  // convert to clock ticks
    cout << "starting\a\n";
    clock_t start = clock();
	cout << "start= " << start << endl;
	cout << "clock()= " << clock() << endl;
	cout << "clock()= " << clock() << endl;
    while (clock() - start < delay )        // wait until time elapses
        ;                                   // note the semicolon
    cout << "done \a\n";
    // cin.get();
    // cin.get();
	system("PAUSE");
    return 0; 
}

// instr2.cpp -- reading more than one word with getline
#include <iostream>
int main()
{
    using namespace std;
    const int ArSize = 20;
    char name[ArSize];
    char dessert[ArSize];

    cout << "Enter your name:\n";
    // cin.getline(name, ArSize);  // reads through newline
    cin.get(name, ArSize);
    cout << "Enter your favorite dessert:\n";
    // cin.getline(dessert, ArSize);
    cin.get(dessert, ArSize);
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << ".\n";
    // cin.get();
    system("pause");
    return 0;
}

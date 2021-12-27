#include <iostream>
using namespace std;

int main()
{
    int quarters;
    int dimes;
    int nickels;
    int pennies;

    cout << "Please enter the number of coins:" << endl;
    cout << "# of quarters: ";
    cin >> quarters;
    cout << "# of dimes: ";
    cin >> dimes;
    cout << "# of nickels: ";
    cin >> nickels;
    cout << "# of pennies: ";
    cin >> pennies;

    int total = (quarters * 25) + (dimes * 10) + (nickels * 5) + pennies;
    cout << "The total is " << total / 100 << " dollars and " << total % 100 << " cents" << endl;

    return 0;
}
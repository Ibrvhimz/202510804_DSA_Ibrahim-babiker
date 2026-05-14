#include <iostream>
using namespace std;

void displayNumber(int num)
{
    cout << "The number is: " << num;
}

int main()
{
    int x;

    cout << "Enter a number: ";
    cin >> x;

    displayNumber(x);

    return 0;
}

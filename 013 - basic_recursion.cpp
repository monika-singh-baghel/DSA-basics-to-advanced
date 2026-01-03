//-------------Print Name N times using Recursion------------
#include <iostream>
using namespace std;
void printName(int i, int n)
{  if (i > n)  // Base condition
        return;
    cout << "Ravi" << endl;
 printName(i + 1, n); // Recursive call
}
int main()
{
    int n;
    cout << "Enter number of times: ";
    cin >> n;
    printName(1, n);
    return 0;
}



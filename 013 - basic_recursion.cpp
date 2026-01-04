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

//---------------Print 1 to N using Recursion----------------
#include <iostream>
using namespace std;
void print(int i, int n)
{ if (i > n) // Base condition
    return;
     cout << i << endl;
    print(i + 1, n); // Recursive call
int main()
{   int n;
    cin >> n;
    print(1, n);
    return 0;
}

//----------------Print N to 1 using Recursion--------------
#include <iostream>
using namespace std;
void print(int i, int n)
{   if (i < 1) // Base condition
        return;
 cout << i << endl;
    print(i - 1, n);// Recursive call
}
int main()
{  int n;
    cin >> n;
    print(n, n);
    return 0;
}

-------------Print 1 to N but by using backtracking-------------
#include <iostream>
using namespace std;
void printBacktrack(int i, int n)
{   if (i < 1) // Base condition
        return;
   printBacktrack(i - 1, n);  // Recursive call
    cout << i << " "; // Print while returning (backtracking)
}
int main()
{   int n;
    cin >> n;
    printBacktrack(n, n);
    return 0;
}        

---------------Sum of first N Natural Numbers---------------------
        //1.parameterised recurssion
#include <iostream>
using namespace std;
int sum(int i, int s)
{   if (i < 1)// Base condition
        return s;
    return sum(i - 1, s + i);// Recursive call
}
int main()
{  int n;
    cin >> n;
    cout << sum(n, 0);
    return 0;
}
       //2.functional recurssion
#include <iostream>
using namespace std;
int fun(int n)
{ if (n == 0)// Base condition
        return 0;
  return n + fun(n - 1);// Recursive relation
}
int main()
{   int n ;
    cin>>n;
    cout << fun(n);
    return 0;
}


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

---------------Recursive function to calculate factorial of a number-----------
#include <bits/stdc++.h>
using namespace std;
int factorial(int n) {
   
    if (n == 0) // Base case: factorial of 0 is 1
    {
        return 1;
    }
    return n * factorial(n - 1);// Recursive case: n * factorial of (n-1)
}
int main() {
   int n;
   cin>>n;
   cout << factorial(n) << endl;// Call the factorial function 
    return 0;
}

---------------------Reverse a given Array-----------------------
        //using two pointer 
#include <iostream>
using namespace std;
void reverseArr(int a[], int l, int r)
{    if (l >= r) // Base condition
        return;
    swap(a[l], a[r]); // Swap elements
    reverseArr(a, l + 1, r - 1);// Recursive call
}
int main()
{   int a[] = {1, 3, 2, 5, 4};
    int n = 5;
    reverseArr(a, 0, n - 1);
    // Print reversed array
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

      //using one pointer
#include <iostream>
using namespace std;
void reverseArr(int a[], int i, int n)
{   if (i >= n / 2)// Base condition
        return;
    swap(a[i], a[n - i - 1]);// Swap using single pointer logic
    reverseArr(a, i + 1, n);// Recursive call
}
int main()
{   int a[] = {1, 2, 3, 4, 5};
    int n = 5;
    reverseArr(a, 0, n);
    // Print reversed array
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";
    return 0;
}

------------------Check if the given String is Palindrome or not--------------------
       #include <iostream>
using namespace std;
bool isPalindrome(string &s, int i)
{   if (i >= s.length() / 2)  // Base condition
        return true;
    if (s[i] != s[s.length() - i - 1])// If characters don't match
        return false;
    return isPalindrome(s, i + 1);// Recursive call
}
int main()
{   string s;
    cin >> s;
    if (isPalindrome(s, 0))
        cout << "Palindrome";
    else
        cout << "Not Palindrome";
    return 0;
} 

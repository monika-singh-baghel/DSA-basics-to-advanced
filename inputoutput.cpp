#include<bits/stdc++.h> /* t angular brackets are used because iostream is an c++ header file found in standard 
system direcctories(compiler;'s include paths). Otherwise inverted commas can also be used ""
differences between <> and "" are : " " (Double Quotes)

Tells the preprocessor to first look for the file in the current directory (where your source code is).

If not found, then it searches the system directories.
 where as 
  < > (Angle Brackets)

Tells the preprocessor to look for the header file only in the standard system directories (compiler’s include paths).

Example:

#include <iostream>


 iostream is part of the C++ Standard Library, so the compiler knows to fetch it from the built-in system headers. */


using namespace std;
/*using namespace std - Namespaces = Name conflict resolution + Code organization + Scoped access + Extensibility.
the above senetence means it can use all the names from the namespace std which makes the code unambiguous 

*/
int main(){
    int a;
    cin>>a;
    int b;
    cin>>b;
    int sum = a+b;
    cout<<"The first number is : "<<a<<"\n";
    cout<<"The Second number is : "<<b<<"\n";
    cout<<"THE SUM IS : "<<sum<<"\n";
    return 0;
}


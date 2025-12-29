    ----COUNTS DIGIT-----
#include <bits/stdc++.h>
using namespace std;
int countDigits(int n) {
    int cnt = 0;
    while (n > 0) {
        cnt++;
        n = n / 10;
    }
    return cnt;
}
int main() {
    int n;
    cin >> n;
    cout << countDigits(n);
    return 0;
}


 -----REVERSE A NUMBER------
#include <bits/stdc++.h>
using namespace std;
// Function to reverse digits of a number
int reverseNumber(int n) {
    int revNum = 0;

    // Loop until all digits are processed
    while (n > 0) {
        int lastDigit = n % 10;          // get last digit
        revNum = revNum * 10 + lastDigit; // add to reversed number
        n = n / 10;                       // remove last digit
    }
    return revNum;
}
int main() {
    int n;
    cin >> n;
    cout << reverseNumber(n);
    return 0;
}

  ------ARMSTRONG NUMBER(CODE FOR 3 DIGIT )-----
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int dup=n;
    int sum=0;
    while(n>0){
       int ld=n%10;
       int r=ld*ld*ld;
        sum=sum+r;
        n=n/10;
    }
    if(sum==dup){
        cout<<"armstrong number";
    }
    else{
        cout<<"not armstrong number";
    }
}

--------PRINT ALL DIVISORS-------
#include<bits/stdc++.h>
using namespace std;

void printDivisors(int n) {
    vector<int> ls;

    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            ls.push_back(i);

            if (n / i != i) {
                ls.push_back(n / i);
            }
        }
    }
    sort(ls.begin(), ls.end());
    for (auto it : ls) {
        cout << it << " ";
    }
}
int main() {
    int n;
    cin >> n;

    printDivisors(n);
    return 0;
}

-------CHECK FOR PRIME------
#include <iostream>
using namespace std;
int main() {
    int n;
    cin >> n;
    if (n <= 1) {
        cout << "Not Prime";
        return 0;
    }
    int cnt = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) {
            cnt++;
            if (n / i != i) {
                cnt++;
            }
        }
    }
    if (cnt == 2)
        cout << "Prime";
    else
        cout << "Not Prime";

    return 0;
}

------GCD OF 2 NUMBERS-------
#include <bits/stdc++.h>
using namespace std;
int findGcd(int a, int b) {
    // Continue loop as long as both a and b are greater than 0
    while(a > 0 && b > 0) {
        // If a is greater than b, subtract b from a and update a
        if(a > b) {
             // Update a to the remainder of a divided by b
            a = a % b;
        }
        // If b is greater than or equal to a, subtract a from b and update b
        else {
            // Update b to the remainder of b divided by a
            b = b % a; 
        }
    }
    // Check if a becomes 0, if so, return b as the GCD
    if(a == 0) {
        return b;
    }
    // If a is not 0, return a as the GCD
    return a;
}
int main() {
    int n1 = 20, n2 = 15;
       // Find the GCD of n1 and n2
    int gcd = findGcd(n1, n2);
    cout << "GCD of " << n1 << " and " << n2 << " is: " << gcd << endl;
    return 0;
}


















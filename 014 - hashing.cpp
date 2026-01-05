------------------//Frequency of elements using Hash Array-----------------
 #include <bits/stdc++.h>
using namespace std;
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    // Precompute
    int hash[13] = {0};   // assuming max element is 12

    for (int i = 0; i < n; i++) {
        hash[arr[i]]++;
    }
    int q;
    cin >> q;
    // Fetch
    while (q--) {
        int number;
        cin >> number;
        cout << hash[number] << endl;
    }
    return 0;
}
 

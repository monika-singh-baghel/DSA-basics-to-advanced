------------------//Frequency of elements using basic logic----------
 #include <bits/stdc++.h>
using namespace std;
int main() {
    int number;
    cin >> number;
    int arr[5] = {1, 2, 1, 3, 2};
    int cnt = 0;
    for (int i = 0; i < 5; i++) {
        if (arr[i] == number) {
            cnt++;
        }
    }
    cout << number << " -> " << cnt << " times";
    return 0;
}

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
 

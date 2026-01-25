-----------------------//Selection Sort---------------------
#include <bits/stdc++.h>
using namespace std;
void selection_sort(int arr[], int n) {
  for (int i = 0; i < n - 1; i++) {
        int mini = i; // Assume current index holds the minimum value
        // Find the index of the smallest element in the remaining array
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[mini]) {
                mini = j; // Update mini if smaller element is found
            }
        }
        // Swap the found minimum element with the first element of unsorted part
        int temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }
    cout << "After selection sort: " << "\n";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";
}
int main() {
    int arr[] = {13, 46, 24, 52, 20, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Call selection sort
    selection_sort(arr, n);
    return 0;}

----------------------//Bubble sort-----------------------
//brute force (timpe comp=O(n^2)
  #include <bits/stdc++.h>
using namespace std;
class BubbleSort {
public:
    void bubble_sort(vector<int>& arr) {
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {  //Use two nested loops to iterate over the array
            for (int j = 0; j <= i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]); //Swap arr[i] with arr[j+1]
                }
            }
        }
        cout << "After Using Bubble Sort:\n";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
};
int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    BubbleSort sorter;
    sorter.bubble_sort(arr);
    return 0;
}

//optimized code(time cpm=O(n)
#include <bits/stdc++.h>
using namespace std;
class BubbleSort {
public:
    void bubble_sort(vector<int>& arr) {
        int n = arr.size();
        for (int i = n - 1; i >= 0; i--) {
            int didSwap = 0; //Use two nested loops to iterate over the array
            for (int j = 0; j <= i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    swap(arr[j], arr[j + 1]);  //Swap arr[j+1] with arr[i]
                    didSwap = 1;
                }
            }
            if (didSwap == 0) {
                break;
            }
        }
        cout << "After Using Bubble Sort:\n";
        for (int num : arr) {
            cout << num << " ";
        }
        cout << endl;
    }
};
int main() {
    vector<int> arr = {13, 46, 24, 52, 20, 9};
    BubbleSort sorter;
    sorter.bubble_sort(arr);
    return 0;
}

  
  

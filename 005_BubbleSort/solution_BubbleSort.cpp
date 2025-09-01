//#include <bits/stdc++.h>
#include <vector>
#include <iostream>
#include "solution_BubbleSort.hpp"

using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    bool swapped;

    for (int i = 0; i < n - 1; i++) {
        swapped = false;

        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        if (!swapped) break;
    }
}

void bubbleSort_task() {
    
    cout << "[Task] Bubble sort\n";

    int n;
    cout << "Provide vector size: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Provide " << n << " elements: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "Before sort: ";
    for (int x : arr) cout << x << " ";
    cout << endl;

    bubbleSort(arr);

    cout << "After sort:    ";
    for (int x : arr) cout << x << " ";
    cout << endl;

}

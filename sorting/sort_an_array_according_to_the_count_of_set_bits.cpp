#include <bits/stdc++.h>
using namespace std;

// Custom comparator based on set bits count
bool compare(int a, int b) {
    int countA = __builtin_popcount(a);
    int countB = __builtin_popcount(b);
    return countA > countB; // descending order
}

void sortSetBitsCount(vector<int>& arr, int size) {
    // Use stable sort to maintain relative order when set bit counts are equal
    stable_sort(arr.begin(), arr.end(), compare);
}

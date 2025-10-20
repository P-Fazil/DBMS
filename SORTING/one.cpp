#include <iostream>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;

int main() {
    vector<int> arr = {9, 6,2,3,7};
    int n = 0;
    sort(arr.begin(), arr.end());
    for(int num : arr) {
        arr[n] = num*num;
        n++;
    }
    for (int num : arr) {
        cout << num << " ";
    }
    

}
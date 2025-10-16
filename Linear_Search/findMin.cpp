#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr = {10, 4,100, 54, 2, -1, 43, 56};
    int min = arr[0];
    for (int i = 0; i < arr.size(); i++){
        if (min > arr[i]) { // for max find just change the operator
            min = arr[i];
        }
    }
    cout << min;
}
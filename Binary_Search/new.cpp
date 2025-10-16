#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5,8, 12};
    int left = 0;
    int right = sizeof(arr) / sizeof(arr[0]) - 1;
    int target = 8;
    while (left < right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            cout << mid << endl;
            break;
        }else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
}
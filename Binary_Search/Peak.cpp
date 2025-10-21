#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> n = {1, 2, 3, 4, 5,6, 7, 8, 9,0, 2, 1};
    int left = 0;
    int right = n.size() - 1;
    while(left < right) {
        int mid = left + (right - left)/ 2;
        if (n[mid] < n[mid+1]) {
            left = mid + 1;
        } else {
            right = mid;
        }
    }
    int index = left;
    left = 0;
    int target = 1;
    right = index;
    while(left <= right) {
        int mid = left + (right - left)/2;
        if (n[mid] == target) {
            cout <<  mid;
            break;
        } else if(n[mid] < target) {
            left = mid + 1;
        } else {
            right = mid-1;
        }
    }
    
    left = index + 1;
    right = n.size() - 1;
    while(left<=right) {
        int mid = left + (right-left)/2;
        if (n[mid] == target) {
            cout << mid;
            break;
        } else if (target > n[mid]) {
            right = mid-1;
        } else {
            left=mid+1;
        }
    }
}
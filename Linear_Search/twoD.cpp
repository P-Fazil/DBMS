#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<vector<int>> arr = {{1, 2, 3}, {4, 5, 6}};
    int target = arr[0][0];
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++){
            if (arr[i][j] < target) {
                target = arr[i][j];
            }
        }
    }
    cout << target << endl;
}
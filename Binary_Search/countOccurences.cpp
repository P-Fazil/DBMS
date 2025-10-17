#include <iostream>
#include <vector>
using namespace std;
int countOccurrences(const vector<int> &arr, int target)
{
    int first = -1;
    int last = -1;
    int start = 0;
    int end = arr.size() - 1;
    // First Occurence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] >= target)
            end = mid - 1;
        else
            start = mid + 1;
        if (arr[mid] == target)
            first = mid;
    }
    start = 0;
    end = arr.size() - 1;
    // Last Occurence
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] <= target)
            start = mid + 1;
        else
            end = mid - 1;
        if (arr[mid] == target)
            last = mid;
    }
    // count
    return last - first + 1;
}
#include<iostream>
using namespace std;

void BIn(int arr[], int search, int start, int end) {
    while (start <= end) {
        int mid = start + (end - start) / 2;

        if (arr[mid] == search) {
            cout << "The element is available at index " << mid << endl;
            return;
        }
        else if (arr[mid] < search) {
            start = mid + 1;
        }
        else {
            end = mid - 1;
        }
    }
    cout << "The element is not available" << endl;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 100};
    int size = sizeof(arr) / sizeof(arr[0]);
    int search = 70;

    BIn(arr, search, 0, size - 1);

    return 0;
}

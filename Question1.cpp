#include <iostream>
using namespace std;

void sortColors(int arr[], int size) {
    int low = 0;
    int high = size - 1;
    int mid = 0;

    while (mid <= high) {
        switch (arr[mid]) {
            case 0:
                swap(arr[low++], arr[mid++]);
                break;
            case 1:
                mid++;
                break;
            case 2:
                swap(arr[mid], arr[high--]);
                break;
        }
    }
}
int main() {
  int size;
  cin>>size;
  int arr[size];
  for(int i=0;i<size;i++){
    cin>>arr[i];
  }
    cout << "Original array: ";
   for(int i=0;i<size;i++){
   cout<<arr[i]<<" ";
   }

    sortColors(arr, size);

    cout << "Sorted array: ";
    printArray(arr, size);

    return 0;
}

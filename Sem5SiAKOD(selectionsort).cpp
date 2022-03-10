#include <iostream>
using namespace std;

void selectionSort(int arr[]) {
  for (int i = 0; i < 4; i++) {
    int min = i;

    for (int j = i + 1; j < 5; j++) {
      if (arr[j] < arr[min]) {
        min = j;
      }
    }
    if (min != i) {
      int temp = arr[min];
      arr[min] = arr[i];
      arr[i] = temp;
    }
  }
}

int main() {

  int myArr[5];
  cout << "Enter 5 integers : " << endl;
  for (int i = 0; i < 5; i++) {
    cin >> myArr[i];
  }
  cout << endl;

  cout << "Before sorting : ";
  for (int i = 0; i < 5; i++) {
    cout << myArr[i] << "  ";
  }

  selectionSort(myArr); // sorting actually happening
  cout << endl;

  cout << "After Sorting : ";
  for (int i = 0; i < 5; i++) {
    cout << myArr[i] << "  ";
  }
  cout << endl;
  return 0;
}

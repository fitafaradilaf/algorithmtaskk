#include <iostream>
using namespace std;

void insertionSort(int arr[])
{
    int j=0;
    int key=0;

    for(int i=1; i<5; i++)
    {
        key = arr[i]; //picking the element
        j = i-1;
        while(j>=0 && arr[j]>key)
        {
            arr[j+1] = arr[j];
            j=j-1;
        }
        arr[j+1] = key;
    }
}

int main()
{
    int myArray[5];
    cout <<"Enter 5 integers : " << endl;
    for (int i=0; i<5; i++)
    {
        cin >> myArray[i];
    }
    cout << "Before sorting : ";
    for(int i=0; i<5; i++)
    {
        cout << myArray[i] << " ";
    }

    insertionSort(myArray);
    cout << endl;

    cout << "After Sorting : ";
    for (int i=0; i<5; i++)
    {
        cout << myArray[i] << " ";
    }
    return 0;
}
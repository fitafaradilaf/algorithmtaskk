#include <iostream>
using namespace std;

void bubbleSort(int a[])
{
    for (int i=0; i<5; i++)
    {
        for (int j=0; j<(5-i-1); j++)
        {
            if (a[j] > a[j+1])
            {
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        } 
    }

}

int main ()
{
    int myArray[5];
    int size;
    cout << "Enter 5 integers: " << endl;
    for (int i=0; i<5; i++)
    {
        cin >> myArray[i];
    }

    cout << "Before Sorting : ";
    for (int i=0; i<5; i++)
    {
        cout << myArray[i] << " ";
    }
    cout << endl;
    
    bubbleSort(myArray); //sorting

    cout << "After Sorting : ";
    for (int i=0; i<5; i++)
    {
        cout << myArray[i] << " ";

    }

    return 0;
}
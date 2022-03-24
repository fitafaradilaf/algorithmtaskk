
#include <iostream>
using namespace std;

void Show_data(int arr[], int n)
{
 int i;
 for (i=1; i<=n; i++)
 cout << arr[i] << " ";
 cout << "\n";
}
int partition (int arr[], int first, int last)
{
 int x, i, j, save;
 i = first;
 j = last; 

   while(1)
   {
       while(arr[i] < arr[first])
       i = i + 1;
       while(arr[j] > arr[first])
       j = j - 1;
       if (i < j)
       {
           //tukarkan data
           save = arr[i];
           arr[i] = arr[j];
           arr[j] = save;
        }
        else
        return j;
   }
}

void quick_sort(int arr[], int first, int last)
{
 int q;
 if (first < last)
 {
    q = partition(arr, first, last);
    quick_sort(arr, first, q);
    quick_sort(arr, q + 1, last);
 }

}

int main()
{
 int i, j, n, arr[100];

   cout << "Enter the amount of data you want to sort : ";
   cin >> n;

   for(i=1; i<=n; i++)
   {
    cout << "Enter the value - "<< i <<" : ";
    cin >> arr[i];
   }

 cout << endl;
 cout << "BEFORE SORTING : " << endl;

 for(j=1; j<=n; j++)
 {
  cout << arr[j] <<" ";
 }

 quick_sort(arr, 1, n);
 //result sorting
 cout << endl;
 cout << endl;
 cout << "DATA THAT HAS BEEN SORTED USING THE QUICK SORT \n";
 Show_data(arr,n);
 
}
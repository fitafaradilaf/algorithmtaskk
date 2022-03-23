#include<iostream>
using namespace std;
int main()
{
    //Variabel
   int arr[100];
   int i, n, t;

   //Input
   cout << endl;
   cout << "SHELL SHORT";
   cout << "Enter the amount of data you want to sort : ";
   cin >> n;
   cout << endl;

   for(i = 0; i < n; i++)
   {
       cout << "Enter the value - " <<1+i<< "  : ";
       cin >> arr[i];
   }

   //Shell Sort
    for(int w = n/2; w > 0; w=w/2)
    {
       for(int x = w; x < n; x++)
      {
          for (int y = x-w; y >= 0; y-=w)
         {
             if(arr[y+w] < arr[y]) //Note
            {
                t=arr[y+w];
               arr[y+w]=arr[y];
               arr[y]=t;
            }
         }
      }
   }

   //Print data after sorting
   cout << endl;
   cout << " DATA THAT HAS BEEN SORTED USING THE SHELL SORT \n";
   cout << endl;
   for(i = 0; i < n; i++)
   {
       cout << arr[i] << " ";
   }
}
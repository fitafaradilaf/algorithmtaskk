#include<iostream>
using namespace std;

int grid[10][10];
//print the solution
void print(int n) {
    for (int i = 0;i <= n-1; i++) {
        for (int j = 0;j <= n-1; j++) {
            
                cout << grid[i][j] << " ";
            
        }
        cout<<endl;
    }
    cout<<endl;
    cout<<endl;
}
//function for check the position is safe or not
//row is indicates the queen no. and col represents the possible positions
bool itisSafe(int col, int row, int n) {
  //check for same column
    for (int i = 0; i < row; i++) {
        if (grid[i][col]) {
            return false;
        }
    }
    //check for upper left diagonal
    for (int i = row,j = col;i >= 0 && j >= 0; i--,j--) {
        if (grid[i][j]) {
            return false;
        }
    }
    //check for upper right diagonal
    for (int i = row, j = col; i >= 0 && j < n; j++, i--) {
        if (grid[i][j]) {
            return false;
        }
    }
    return true;
}
//function to find the position for each queen
//row is indicates the queen no. and col represents the possible positions
bool solving (int n, int row) {
    if (n == row) {
        print(n);
        return true;
    }
    //variable bcktr is use for possible backtracking 
    bool bcktr = false;
    for (int i = 0; i <=n-1; i++) {
        if (itisSafe(i, row, n)) {
            grid[row][i] = 1;
            //recursive call solving(n, row+1) for next queen (row+1)
            bcktr = solving(n, row+1) || bcktr;//if bcktr ==false then backtracking will occur 
            //by assigning the grid[row][i] = 0
            
            grid[row][i] = 0;
        }
    }
    return bcktr;
}
int main()
{

/* It toggles on or off the synchronization 
of all the C++ standard streams with their corresponding standard C streams 
if it is called before the program performs its first input or output operation*/
  ios_base::sync_with_stdio(false); 
/*is a method that simply guarantees the flushing of std::cout before std::cin accepts an input. 
This is useful for interactive console programs which require the console to be updated constantly 
but also slows down the program for large I/O */
    cin.tie(NULL); 
        int n;
        cout<<"Enter the number of queen : ";
        cin >> n;
        for (int i = 0;i < n;i++) {
            for (int j = 0;j < n;j++) {
                grid[i][j] = 0;
            }
        }
        bool bcktr = solving(n, 0);
        if(bcktr == false) {
            cout << -1 << endl; //if there is no possible solution
        } else {
            cout << endl;
        }
  return 0;
}

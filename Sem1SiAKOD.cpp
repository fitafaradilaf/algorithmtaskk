#include <bits/stdc++.h>
using namespace std;

#define N 8

int solveknt(int x, int y, int movee, int s[N][N],
				int xMove[], int yMove[]);

int iss(int x, int y, int s[N][N])
{
	return (x >= 0 && x < N && y >= 0 && y < N
			&& s[x][y] == -1);
}

void printSolution(int s[N][N])
{
	for (int x = 0; x < N; x++) {
		for (int y = 0; y < N; y++)
			cout << " " << setw(2) << s[x][y] << " ";
		cout << endl;
	}
}

int sknt()
{
	int s[N][N];

	for (int x = 0; x < N; x++)
		for (int y = 0; y < N; y++)
			s[x][y] = -1;

	
	int xMove[8] = { 2, 1, -1, -2, -2, -1, 1, 2 };
	int yMove[8] = { 1, 2, 2, 1, -1, -2, -2, -1 };


	s[0][0] = 0;

	
	if (solveknt(0, 0, 1, s, xMove, yMove) == 0) {
		cout << "Solution does not exist";
		return 0;
	}
	else
		printSolution(s);

	return 1;
}

int solveknt(int x, int y, int movee, int s[N][N],
				int xMove[8], int yMove[8])
{
	int k, next_x, next_y;
	if (movee == N * N)
		return 1;


	for (k = 0; k < 8; k++) {
		next_x = x + xMove[k];
		next_y = y + yMove[k];
		if (iss(next_x, next_y, s)) {
			s[next_x][next_y] = movee;
			if (solveknt(next_x, next_y, movee + 1, s,
							xMove, yMove)
				== 1)
				return 1;
			else
				
			
				s[next_x][next_y] = -1;
		}
	}
	return 0;
}

int main()
{
	// Function Call
	sknt();
	return 0;
}

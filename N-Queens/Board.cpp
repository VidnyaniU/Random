#include <bits/stdc++.h>
#include "Board.hpp"
using namespace std;
#define N 8
Board::Board()
{
    board = vector<vector<char>>(N, vector<char>(N, '-'));
}

void Board::placeQueen(int row, int col)
{
    board[row][col] = 'Q';
}

void Board::removeQueen(int row, int col)
{
    board[row][col] = '-';
}

bool Board::canAttack(int row, int col)
{
    // Check row
    for (int i = 0; i < N; ++i)
    {
        if (board[row][i] == 'Q')
        {
            return true;
        }
    }

    // Check column
    for (int i = 0; i < N; ++i)
    {
        if (board[i][col] == 'Q')
        {
            return true;
        }
    }

    // Check upper diagonal
    for (int i = row, j = col; i >= 0 && j >= 0; --i, --j)
    {
        if (board[i][j] == 'Q')
        {
            return true;
        }
    }

    // Check lower diagonal
    for (int i = row, j = col; i < N && j >= 0; ++i, --j)
    {
        if (board[i][j] == 'Q')
        {
            return true;
        }
    }

    return false;
}
int cnt = 1;
void Board::printBoard()
{
    cout << "Solution :: " << cnt << endl;
    for (int i = 0; i < N; ++i)
    {
        for (int j = 0; j < N; ++j)
        {
            cout << board[i][j] << " ";
        }
        cout << endl;
    }
    cout << "================ " << endl;

    cnt++;
}

#include <bits/stdc++.h>
#include "Board.hpp"
#include "Queen.hpp"

bool solveNQueens(Board &board, int col)
{
    int N = 8;
    if (col >= N)
    {
        board.printBoard();

        return true;
    }

    bool res = false;
    for (int i = 0; i < N; ++i)
    {
        if (!board.canAttack(i, col))
        {
            board.placeQueen(i, col);
            res = solveNQueens(board, col + 1); // recursively call solveNQueens for the next columns and check if safe or not
            board.removeQueen(i, col);
        }
    }

    return res;
}

int main()
{
    Board board;
    solveNQueens(board, 0);
    return 0;
}

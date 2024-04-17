#include <bits/stdc++.h>
using namespace std;

class Board
{
private:
    std::vector<std::vector<char>> board;

public:
    Board();
    void placeQueen(int row, int col);
    void removeQueen(int row, int col);
    bool canAttack(int row, int col);
    void printBoard();
};
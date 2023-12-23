#include <stdio.h>
#include <stdbool.h>

bool hasWon(char board[3][3], char player)
{
    // check the rows
    for (int row = 0; row < 3; row++)
    {
        if (board[row][0] == player && board[row][1] == player && board[row][2] == player)
        {
            return true;
        }
    }

    // check the cols
    for (int col = 0; col < 3; col++)
    {
        if (board[0][col] == player && board[1][col] == player && board[2][col] == player)
        {
            return true;
        }
    }

    // check diagonal elements

    if (board[0][0] == player && board[1][1] == player && board[2][2] == player)
    {
        return true;
    }

    if (board[0][2] == player && board[1][1] == player && board[2][0] == player)
    {
        return true;
    }

    return false;
}
void printBoard(char board[3][3])
{
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 3; col++)
        {
            printf("%c |", board[row][col]);
        }
        printf("\n");
    }
}
int main()
{
    char board[3][3];
    int boardLen = 3;
    for (int row = 0; row < boardLen; row++)
    {
        for (int col = 0; col < boardLen; col++)

            board[row][col] = ' ';
    }

    char player = 'X';
    bool gameOver = false;

    while (!gameOver)
    {
        printBoard(board);
        printf("Player %c enter:", player);
        int inputRow = scanf("%c", &inputRow);
        int inputCol = scanf("%c", &inputCol);
        printf("\n");

        if (board[inputRow][inputCol] == ' ')
        {
            // place the element
            board[inputRow][inputCol] = player;
            gameOver = hasWon(board, player);
            if (gameOver)
            {
                printf("Player %c has won!");
            }
            else
            {
                if (player == 'X')
                {
                    player = '0';
                }
                else
                    player = 'X';
            }
        }
        else
        {
            printf("Invalid position.Try again!");
        }
    }

    return 0;
}
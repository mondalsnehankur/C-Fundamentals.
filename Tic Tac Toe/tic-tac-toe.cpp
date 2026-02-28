#include <iostream>
using namespace std;

int currentPlayer;
char currentMarker;
char board[3][3] = {{'1', '2', '3'}, {'4', '5', '6'}, {'7', '8', '9'}};

void drawBoard()
{
    cout << " " << board[0][0] << " | " << board[0][1] << " | " << board[0][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[1][0] << " | " << board[1][1] << " | " << board[1][2] << "\n";
    cout << "---|---|---\n";
    cout << " " << board[2][0] << " | " << board[2][1] << " | " << board[2][2] << "\n";
    cout << "---|---|---\n";
}

bool placemaker(int slot)
{
    int row = (slot - 1) / 3;
    int col = (slot - 1) % 3;

    if (board[row][col] != 'X' && board[row][col] != 'O')
    {
        board[row][col] = currentMarker;
        return true;
    }
    else
    {
        return false;
    }
}

int winner()
{
    // rows
    for (int i = 0; i < 3; i++)
    {
        if (board[i][0] == board[i][1] == board[i][2])
        {
            return currentPlayer;
        }
    }

    // columns
    for (int i = 0; i < 3; i++)
    {
        if (board[0][i] == board[1][i] == board[2][i])
        {
            return currentPlayer;
        }
    }

    // diagonals
    if (board[0][0] == board[1][1] == board[2][2])
    {
        return currentPlayer;
    }
    if (board[2][0] == board[1][1] == board[0][2])
    {
        return currentPlayer;
    }

    return 0;
}

void swapPlayerandMarker()
{
    if (currentPlayer == 1)
    {
        currentPlayer = 2;
        currentMarker = (currentMarker == 'X') ? 'O' : 'X';
    }
    else
    {
        currentPlayer = 1;
        currentMarker = (currentMarker == 'X') ? 'O' : 'X';
    }
}

void game()
{
    cout << "Player1 coose your marker: X or O : ";
    char markerP1;
    cin >> markerP1;

    currentPlayer = 1;
    currentMarker = markerP1;

    drawBoard();

    int playerWon;

    for (int i = 0; i < 9; i++)
    {
        cout << "it's player" << currentPlayer << "'s turn. Enter your slot: ";
        int slot;
        cin >> slot;

        if (slot < 1 || slot > 9)
        {
            cout << "Invalid slot! Try again.\n";
            i--;
            continue;
        }

        if (!placemaker(slot))
        {
            cout << " Slot already taken! Try again. \n";
            i--;
            continue;
        }

        drawBoard();

        playerWon = winner();

        if (playerWon == 1)
        {
            cout << "Player 1 wins! Congratulations! \n";
            break;
        }
        else if (playerWon == 2)
        {
            cout << "Player 2 wins! Congratulations! \n";
            break;
        }

        swapPlayerandMarker();

        if (playerWon == 0 && i == 8)
        {
            cout << "It's a draw! \n";
        }
    }
}
int main()
{
    game();
    return 0;
}
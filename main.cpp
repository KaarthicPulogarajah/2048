#include <iostream>
#include <conio.h>
#include <cstdlib>
#include <time.h>

using namespace std;
void print (int a[4][4]);
int largest (int a[4][4]);
int check (int a[4][4]);
int main()
{
    int large = 0, axe = -1, counter = 0;
    //initialize game
    int game[4][4] = {{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    srand(time(NULL));
    int coor1 = rand() % 6 +1;
    int coor2 = rand() % 6 +1;
    int a = rand() %4;
    int b = rand() %4;

    //random coordinate 1
    if (coor1 <=5)
    {
        game[a][b] = 2;
    }
    else if (coor1 == 6)
    {
        game[a][b] = 4;
    }

    //random coordinate 2
    a = rand() %4;
    b = rand() %4;
    if (coor2 <= 5)
    {
        while (game[a][b] != 0)
        {
            a = rand() %4;
            b = rand() %4;
        }
        game[a][b] =2;
    }
    else if (coor2 == 6)
    {
        while (game[a][b] != 0)
        {
            a = rand() %4;
            b = rand() %4;
        }
        game[a][b] =4;
    }
    cout << "YOU ARE PLAYING 2048\n\nUse W A S D to shift pieces up, left, down, or right, respectively\nYou can press 'p' to exit\n";
    print(game);
    int z = 0;
    //move tiles
    char choice;
    do
    {

        cin >> choice;
        if (choice == 'w')
        {
            z = 0;
            coor2 = rand() % 6 +1;
            //moving up
            //3 times to move everything up
            for (int k = 1 ; k <=3 ; k++)
            {
                //i and j are to access the array
                for (int i = 0 ; i < 3 ; i++)
                {
                    for (int j = 0 ; j < 4; j++)
                    {
                        //for (int l = 1 ; l <= 3 ; l++)
                        {
                            if (game[i][j] == 0)
                            {
                                if (game[i+1][j] != 0)
                                    z++;
                                game[i][j] = game[i+1][j];
                                game[i+1][j] = 0;
                            }
                        }
                        if (game[i][j] == game[i+1][j] && game[i][j] != 0)
                        {
                            game[i][j] = game[i][j]*2;
                            game[i+1][j] = 0;
                            z++;
                            break;
                        }
                    }
                }
            }
            //add a random number
            if (z>0)
                {
                if (coor2 <= 5)
                {
                    a = rand() %4;
                    b = rand() %4;
                    while (game[a][b] != 0)
                    {
                        a = rand() %4;
                        b = rand() %4;
                    }
                    game[a][b] =2;
                }
                else if (coor2 == 6)
                {
                    a = rand() %4;
                    b = rand() %4;
                    while (game[a][b] != 0)
                    {
                        a = rand() %4;
                        b = rand() %4;
                    }
                    game[a][b] =4;
                }
            }
            //print
            print(game);
        }
        else if (choice == 'a')
        {
            z = 0;
            coor2 = rand() % 6 +1;
            for (int k = 1; k <=3 ; k++)
            {
                for(int i = 0 ; i < 4 ; i++)
                {
                    for (int j = 0 ; j< 3 ;j++)
                    {
                        //for (int l = 1 ; l <= 3 ; l++)
                        {
                            if (game[i][j] == 0)
                            {
                                if (game[i][j+1] != 0)
                                    z++;
                                game[i][j] = game[i][j+1];
                                game[i][j+1] = 0;
                            }
                        }
                        if (game[i][j] == game[i][j+1]&& game[i][j] != 0)
                        {
                            game[i][j] = game[i][j]*2;
                            game[i][j+1] = 0;
                            z++;

                        }
                    }
                }
            }
            //add a random number
            if (z>0){
                if (coor2 <= 5)
                {
                    a = rand() %4;
                    b = rand() %4;
                    while (game[a][b] != 0)
                    {
                        a = rand() %4;
                        b = rand() %4;
                    }
                    game[a][b] =2;
                }
                else if (coor2 == 6)
                {
                    a = rand() %4;
                    b = rand() %4;
                    while (game[a][b] != 0)
                    {
                        a = rand() %4;
                        b = rand() %4;
                    }
                    game[a][b] =4;
                }
            }

            //print
            print(game);
        }
        else if (choice == 's')
        {
            z = 0;
            coor2 = rand() % 6 +1;
            for (int k = 1 ; k <=3 ; k++)
            {
                for (int i = 3 ; i > 0; i--)
                {
                    for (int j = 0 ; j < 4 ; j++)
                    {
                        //for (int l = 1 ; l <= 3 ; l++)
                        {
                            if (game[i][j] == 0)
                            {
                                if (game[i-1][j] != 0)
                                    z++;
                                game[i][j] = game[i-1][j];
                                game[i-1][j] = 0;
                            }
                        }
                        if (game[i][j] == game[i-1][j]&& game[i][j] != 0)
                        {
                            game[i][j] = game[i][j]*2;
                            game[i-1][j] = 0;
                            z++;
                        }
                    }
                }
            }
            //add a random number
            if (z>0){
                if (coor2 <= 5)
                {
                    a = rand() %4;
                    b = rand() %4;
                    while (game[a][b] != 0)
                    {
                        a = rand() %4;
                        b = rand() %4;
                    }
                    game[a][b] =2;
                }
                else if (coor2 == 6)
                {
                    a = rand() %4;
                    b = rand() %4;
                    while (game[a][b] != 0)
                    {
                        a = rand() %4;
                        b = rand() %4;
                    }
                    game[a][b] =4;
                }
            }
            //print
            print(game);
        }
        else if (choice == 'd')
        {
            z = 0;
            coor2 = rand() % 6 +1;
            for (int k = 1 ; k <=3 ;k++)
            {
                for(int i = 0; i < 4 ; i++)
                {
                    for (int j = 3; j > 0 ; j--)
                    {
                        //for (int l = 1 ; l <= 3 ; l++)
                        {
                            if (game[i][j] == 0)
                            {
                                if (game[i][j-1] != 0)
                                    z++;
                                game[i][j] = game[i][j-1];
                                game[i][j-1] = 0;
                            }
                        }
                        if (game[i][j] == game[i][j-1]&& game[i][j] != 0)
                        {
                            game[i][j] = game[i][j]*2;
                            game[i][j-1] = 0;
                            z++;
                        }
                    }
                }
            }
            //add a random number
            if (z >0){
                if (coor2 <= 5)
                {
                    a = rand() %4;
                    b = rand() %4;
                    while (game[a][b] != 0)
                    {
                        a = rand() %4;
                        b = rand() %4;
                    }
                    game[a][b] =2;
                }
                else if (coor2 == 6)
                {
                    a = rand() %4;
                    b = rand() %4;
                    while (game[a][b] != 0)
                    {
                        a = rand() %4;
                        b = rand() %4;
                    }
                    game[a][b] =4;
                }
            }
            //print
            print(game);
        }
        large = largest(game);
        axe = check(game);
        counter++;
    }
    while (large != 2048 && axe != -1 && choice != 'p');

    if (large == 2048)
        cout << endl << "YOU WIN!!" << "\nThat took you " << counter << " moves!";
    if (axe == -1)
        cout << endl << "YOU LOSE!!";
    if (choice == 'p')
        return 0;
    getch();
    return 0;
}

void print (int a[4][4])
{
    cout << endl;
    //display game
    for (int i = 0 ; i < 4; i++)
    {
        for (int j = 0 ; j < 4 ; j++)
            cout << a[i][j] << "\t";
        cout << endl;
    }
}

int largest (int a[4][4])
{
    int big = 0;
    for (int i = 0 ; i < 4; i++)
    {
        for (int j = 0 ; j < 4 ; j++)
            {
                if (a[i][j] > big)
                    big = a[i][j];
            }
    }
    return big;
}

int check (int a[4][4])
{
    int check = -1;
    for (int i = 0 ; i < 4; i++)
    {
        for (int j = 0 ; j < 4 ; j++)
        {
            if (a[i][j] == 0)
                check++;
        }
    }
    return check;
}


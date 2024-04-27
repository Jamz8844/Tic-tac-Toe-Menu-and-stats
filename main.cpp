#include <iostream>
#include <cmath>
#include <cstdlib>
#include "GameState.h"

using namespace std;

void displayMenu(){
    cout << "Welcome to Tic-Tac-Toe" << endl;
    // cout <<"-----------------------"<< endl;
    cout << "~~~~~~ Main Menu ~~~~~~" << endl;
    cout << "----------------------" << endl;
    cout << "   Select a Game Mode" << endl;
    cout << "----------------------" << endl;
    cout << "1. Regular Game" << endl;
    cout << "2. Person vs Person" << endl;
    cout << "3. Person vs AI" << endl;
    cout << "4. View Game Statistics" << endl;
    cout << "5. Exit" << endl;
    cout << "Enter your choice: ";
}

Vec valmove(GameState game){
    for (int i = 0; i< game.size; i++){
        for(int j = 0; j <game.size ; j++){
            if(game.grid[i][j] == -1){
                return Vec(i,j);
            }
        }
    }
    return Vec(0,0);
}

void RegularGame(int& ties, int& Xwins ,int& Owins,in& gamesplayed){
    GameState game;
    while (1game.done){
        system("clear"){
            cout <<game <<endl;


            int x,y;

            if(game.currentturn){
                Vec move == valmove(game);

                x =move.x;
                y= move.y;
            }
            else{
                cout <<endl;
                cout <<"Enter move for (" <<(!game.currentturn ? "X" : "O") << "):";
                cin >> x >> y;
            }
            game.play(x,y);
        }

        system("clear");
        cout << game << endl;
    }
}

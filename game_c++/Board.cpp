#include <stdio.h>
#include <vector>
#include "Board.hpp"



Board::Board(){
    for (int row = 0; row < 8; row++){
        for(int col = 0; col < 8; col++){
            //this is starting with the white pieces
            if(row == 0 && col == 0 || row == 0 && col == 7){
                squares[row][col] = new Piece({row,col}, true, 2);
            }
            else if(row == 0 && col == 1 || row == 0 && col == 6){
                squares[row][col] = new Piece({row,col}, true,3);
            }
            else if(row == 0 && col == 2 || row == 0 && col == 5){
                squares[row][col] = new Piece({row,col}, true,4);
            } 
            else if(row == 0 && col ==3){
                squares[row][col] = new Piece({row,col}, true, 5);
            }
            else if(row == 0 && col == 4){
                squares[row][col] = new Piece({row,col}, true, 6);
            //this is starting the black pieces
            }
            else if(row == 7 && col == 0 || row == 7 && col == 7){
                squares[row][col] = new Piece({row,col}, false, 2);
            }
            else if(row == 7 && col == 1 || row == 7 && col == 6){
                squares[row][col] = new Piece({row,col}, false,3);
            }
            else if(row == 7 && col == 2 || row == 7 && col == 5){
                squares[row][col] = new Piece({row,col}, false,4);
            } 
            else if(row == 7 && col ==3){
                squares[row][col] = new Piece({row,col}, false, 5);
            }
            else if(row == 7 && col == 4){
                squares[row][col] = new Piece({row,col}, false, 6);

            }
            else if(row == 6){
                squares[row][col] = new Piece({row,col}, false,1);
            }
            else if(row == 1){
                squares[row][col] = new Piece({row,col}, true,1);
            }
            else{
                continue;
            }
        }
    }
}
void Board::deconstructBoard(){
    for (int row = 0; row < 8; row++){
        for(int col = 0; col < 8; col++){
            delete squares[row][col];
        }
     }
}

Piece* Board::getPiece(int row, int col){
    return squares[row][col];
}


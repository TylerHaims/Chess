#include<stdio.h>
#include<vector>
#include <cstdlib>
#include "Piece.hpp"
#include <iostream>

using namespace std;

        // vector<int> currPos;

        // bool color; //this determines piece color

        // int pieceType; // this will determine the type of the piece 1=pawn 2=rook



char Piece::rulesForPawn(const vector<int>& move){
    if (color == 1){
        if (move[0] == currPos[0] + 1 && move[1] == currPos[1]){
            return 'm';
        }
        else if (move[0] == currPos[0] + 1 && move[1] == currPos[1] + 1 ){
            return 'a'; 
        }
        else if  (move[0] == currPos[0] + 1 && move[1] == currPos[1] - 1 ){
            return 'a';
        }
        else{
            return 'I';
        }
    }
    else{
        if (move[0] == currPos[0] -1 && move[1] == currPos[1]){
            return 'm';
        }
        else if (move[0] == currPos[0] - 1 && move[1] == currPos[1] + 1 ){
            return 'a'; 
        }
        else if  (move[0] == currPos[0] - 1 && move[1] == currPos[1] - 1 ){
            return 'a';
        }
        else{
            return 'I';
        }

    }


}
char Piece::rulesForRook(const vector<int>& move){
    if (move[0] != currPos[0]){
        return 'a';
    }
    else if (move[1] != currPos[1]){
        return 'a';
    }
    else{
        return 'I';
    }


}
char Piece::rulesForBishop(const vector<int>& move){
    if (move[0] != currPos[0] and move[1] == currPos[1]){
        return 'I';
    }
    if (move[0] == currPos[0] and move[1] != currPos[1]){
        return 'I';
    }

    else{
        return 'm';
    }

}

char Piece::rulesForKnight(const vector<int>& move){
    if (currPos[0]  - 2 <= move[0] <= currPos[0] + 2 and currPos[1] - 1 <= move[1] <= currPos[1] + 1){
        return 'm';
    }
    //this condition is checking for a horizantal L
    if (currPos[1]  - 2 <= move[1] <= currPos[1] + 2 and currPos[0] - 1 <= move[0] <= currPos[0] + 1){
        return 'm';
    }
    else{
        return 'I';
    }

}


char Piece::rulesForQueen(const vector<int>& move){
    if (move[0] != currPos[0] and move[1] != currPos[1]){
        return 'm';
    }
    else{
        return 'I';
    }

}
char Piece::rulesForKing(const vector<int>& move){
    int yDistance = move[0] - currPos[0];
    int xDistance = move[1] - currPos[1];
    if ( 1 >= yDistance >= -1 and 1 >= xDistance >= -1 ){
        return 'm';
    }
    else{
        return 'I';
    }

}

Piece::Piece(vector<int> currPos, bool color, int pieceType){
    this->currPos = currPos; 
    this->color = color;
    this->pieceType = pieceType;

}


char Piece::validMove(const vector<int>& move){
    cout<<"i am here"<<endl;

    switch (pieceType)
    {
    case 1:
        return rulesForPawn(move);
    case 2:
        return rulesForRook(move); 
    case 3:
        return rulesForKnight(move);
    case 4:
        return rulesForBishop(move);
    case 5:
        return rulesForQueen(move);
    case 6:
        return rulesForKing(move);
    default:
        return 'I';
    }
}

vector<int> Piece::getCurrPos(){
    return currPos;
}

void Piece::setCurrPos(vector<int> update){
    currPos = update;
}










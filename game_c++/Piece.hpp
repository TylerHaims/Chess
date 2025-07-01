
#ifndef PIECE
#define PIECE

#include <vector>
#include <stdio.h>
#include <iostream>
#include <cstdlib>


using namespace std;

class Piece {
private:
    vector<int> currPos;
    bool color; // this determines piece color
    int pieceType; // this will determine the type of the piece 1=pawn, 2=rook, etc.
    
    //all of these rules assume that the move is check prior to checking the rule for the indivdual piece
    char rulesForPawn(const vector<int>& move);
    char rulesForRook(const vector<int>& move);
    char rulesForBishop(const vector<int>& move);
    char rulesForKnight(const vector<int>& move);
    char rulesForQueen(const vector<int>& move);
    char rulesForKing(const vector<int>& move);

public:
    // Constructor for initializing a piece with position, color, and type
    Piece(vector<int> currPos, bool color, int pieceType);

    // Method to validate a move for a piece
    char validMove(const vector<int>& move);

    // Getter for the current position of the piece
    vector<int> getCurrPos();

    // Setter for updating the current position of the piece
    void setCurrPos(vector<int> update);

    bool getColor();

    int getType();
};


#endif
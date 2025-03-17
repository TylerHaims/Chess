#ifndef BOARD.HPP
#define BOARD.HPP

#include "Piece.hpp"
//the board will be an array of pieces and all peices are aware of their own positions
class Board{
    public:
        Piece *createBoard(); 
        void deconstructBoard();
        Piece *getPiece(int row, int col);
    private:
        Piece* squares[8][8];

};

#endif
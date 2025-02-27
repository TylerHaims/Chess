#ifndef BOARD.HPP
#define BOARD.HPP

#include "Piece.hpp"
//the board will be an array of pieces and all peices are aware of their own positions
class Board{
    public:
    Piece *createBoard(); 
    private:
};

#endif
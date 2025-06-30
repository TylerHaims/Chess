#ifndef BOARD
#define BOARD
//the board will be an array of pieces and all peices are aware of their own positions

class Board{

    private:
        Piece* squares[8][8];


    public:
        Board(); 
        void deconstructBoard();
        Piece* getPiece(int row, int col);

};

#endif
#include <gtest/gtest.h>
#include <vector>
#include <stdio.h>
#include "Piece.h"


class pieceTest: public ::testing::Test{
    protected:
    Piece* piecePawn;
    Piece* pieceRook;
    Piece* pieceKnight;
    Piece* pieceBishop;
    Piece* pieceQueen;
    Piece* pieceKing;


        void SetUp() override{
            piecePawn = new Piece({1,1},true,1);
            pieceRook = new Piece({1,1},true,2);
            pieceKnight = new Piece({1,1},true,3);
            pieceBishop = new Piece({1,1},true,4);
            pieceQueen = new Piece({1,1},true,5);
            pieceKing = new Piece({1,1},true,6);

        }
        void TearDown() override{
            delete piecePawn;
            delete pieceRook;
            delete  pieceKnight;
            delete pieceBishop;
            delete pieceQueen;
            delete  pieceKing;
        
            
        }

};





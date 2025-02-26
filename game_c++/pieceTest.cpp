#include <gtest/gtest.h>
#include <vector>
#include <stdio.h>
#include "Piece.hpp"


class pieceTest: public ::testing::Test{
    protected:
    Piece *piecePawn;
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

TEST_F(pieceTest, testingPawnWhiteFoward){
    vector<int> move = {2,1};
    char test = piecePawn->validMove(move);
    // cout << "this is the col value: " << move[0] <<endl;
    // cout << "this is the col val of curr: " << piecePawn->getCurrPos()[0] << endl;
    // cout << "this is the result " << test << endl;
    EXPECT_EQ(test, 'm');
}

TEST_F(pieceTest, testingPawnWhiteAttack){
    vector<int> moveL = {2,0};
    vector<int> moveR = {2,2};
    char testL = piecePawn->validMove(moveL);
    char testR = piecePawn->validMove(moveR);

    
    EXPECT_EQ(testL, 'a');
    EXPECT_EQ(testR, 'a');
}
TEST_F(pieceTest, testingPawnBlackMove){
    
}

int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}





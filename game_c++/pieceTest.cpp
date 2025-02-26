#include <gtest/gtest.h>
#include <vector>
#include <stdio.h>
#include "Piece.hpp"


class pieceTest: public ::testing::Test{
    protected:
    Piece *blackpawn;
    Piece *piecePawn;
    Piece* pieceRook;
    Piece* pieceKnight;
    Piece* pieceBishop;
    Piece* pieceQueen;
    Piece* pieceKing;


        void SetUp() override{
            blackpawn = new Piece({6,6},false,1);
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
//this is testing the moveset for a white pawn
TEST_F(pieceTest, testingPawnWhiteFoward){
    vector<int> move = {2,1};
    char test = piecePawn->validMove(move);
    // cout << "this is the col value: " << move[0] <<endl;
    // cout << "this is the col val of curr: " << piecePawn->getCurrPos()[0] << endl;
    // cout << "this is the result " << test << endl;
    EXPECT_EQ(test, 'm');
}
//this is testing the attackset for a white pawn
TEST_F(pieceTest, testingPawnWhiteAttack){
    vector<int> moveL = {2,0};
    vector<int> moveR = {2,2};
    char testL = piecePawn->validMove(moveL);
    char testR = piecePawn->validMove(moveR);

    
    EXPECT_EQ(testL, 'a');
    EXPECT_EQ(testR, 'a');
}
//testing move for black pawn
TEST_F(pieceTest, testingPawnBlackMove){
    vector<int> move = {5,6};
    char test = blackpawn->validMove(move);
    EXPECT_EQ(test, 'm');

}
//testing attack for black pawn
TEST_F(pieceTest, testingPawnBlackAttack){
    vector<int> moveL = {5,5};
    vector<int> moveR = {5,7};
    char testL = blackpawn->validMove(moveL);
    char testR = blackpawn->validMove(moveR);

    
    EXPECT_EQ(testL, 'a');
    EXPECT_EQ(testR, 'a');

}
TEST_F(pieceTest, testingRookHorizantal){
    vector<int> move = {1,5};
    char test = pieceRook->validMove(move);
    EXPECT_EQ(test, 'a');

}
TEST_F(pieceTest, testingRookVertical){
    vector<int> move = {5,1};
    char test = pieceRook->validMove(move);
    EXPECT_EQ(test, 'a');

}


TEST_F(pieceTest, testingRookInvalid){
    vector<int> move = {5,5};
    char test = pieceRook->validMove(move);
    EXPECT_EQ(test, 'I');

}
TEST_F(pieceTest, testingBishopDiagnol){
    vector<int> move = {2,2};
    vector<int> move2 = {2,0};
    vector<int> move3 = {0,0};
    vector<int> move4 = {0,2};

    char test = pieceBishop->validMove(move);
    char test2 = pieceBishop->validMove(move2);
    char test3 = pieceBishop->validMove(move3);
    char test4 = pieceBishop->validMove(move4);

    EXPECT_EQ(test, 'a');
    EXPECT_EQ(test2, 'a');
    EXPECT_EQ(test3, 'a');
    EXPECT_EQ(test4, 'a');



}
TEST_F(pieceTest, testingBishopInvalid){
    vector<int> move = {2,1};
    char test = pieceBishop->validMove(move);
    EXPECT_EQ(test, 'a');
 
}



int main(int argc, char **argv) {
  testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}





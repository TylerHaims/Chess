#include <gtest/gtest.h>
#include "Board.hpp"


class BoardTest : public ::testing::Test {
protected:
    Board board;

    void TearDown() override {
        board.deconstructBoard();
    }
};

TEST_F(BoardTest, WhitePawnRowInitialized) {
    for (int col = 0; col < 8; col++) {
        Piece* p = board.getPiece(1, col);
        ASSERT_NE(p, nullptr);
        //fix this
        EXPECT_TRUE(p->getColor());
        EXPECT_EQ(p->getType(), 1); // assuming 1 = pawn
    }
}

TEST_F(BoardTest, BlackPawnRowInitialized) {
    for (int col = 0; col < 8; col++) {
        Piece* p = board.getPiece(6, col);
        ASSERT_NE(p, nullptr);
        //fix this
        EXPECT_FALSE(p->getColor());
        EXPECT_EQ(p->getType(), 1); // pawn
    }
}

TEST_F(BoardTest, WhiteMajorPiecesCorrect) {
    //fix the get type here
    EXPECT_EQ(board.getPiece(0, 0)->getType(), 2); // rook
    EXPECT_EQ(board.getPiece(0, 1)->getType(), 3); // knight
    EXPECT_EQ(board.getPiece(0, 2)->getType(), 4); // bishop
    EXPECT_EQ(board.getPiece(0, 3)->getType(), 5); // queen
    EXPECT_EQ(board.getPiece(0, 4)->getType(), 6); // king
    EXPECT_EQ(board.getPiece(0, 5)->getType(), 4); // bishop
    EXPECT_EQ(board.getPiece(0, 6)->getType(), 3); // knight
    EXPECT_EQ(board.getPiece(0, 7)->getType(), 2); // rook
}

TEST_F(BoardTest, BlackMajorPiecesCorrect) {
    //fix the get type here
    EXPECT_EQ(board.getPiece(7, 0)->getType(), 2); // rook
    EXPECT_EQ(board.getPiece(7, 1)->getType(), 3); // knight
    EXPECT_EQ(board.getPiece(7, 2)->getType(), 4); // bishop
    EXPECT_EQ(board.getPiece(7, 3)->getType(), 5); // queen
    EXPECT_EQ(board.getPiece(7, 4)->getType(), 6); // king
    EXPECT_EQ(board.getPiece(7, 5)->getType(), 4); // bishop
    EXPECT_EQ(board.getPiece(7, 6)->getType(), 3); // knight
    EXPECT_EQ(board.getPiece(7, 7)->getType(), 2); // rook
}

TEST_F(BoardTest, EmptySquaresAreNull) {
    for (int row : {2, 3, 4, 5}) {
        for (int col = 0; col < 8; col++) {
            EXPECT_EQ(board.getPiece(row, col), nullptr);
        }
    }
}



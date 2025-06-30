#include <gtest/gtest.h>
#include "Board.hpp"

class boardTest: public ::testing::Test{
    protected:
    Board* testingBoard;

    void SetUp() override{
        testingBoard = new Board();
    }

    void TearDown() override{
        delete testingBoard;
    }


};

TEST_F(boardTest, testingStartingPos){
    for(int i = 0; i < 8; i++){
        
    }

}

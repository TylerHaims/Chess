#include<stdio.h>
#include<vector>

using namespace std;

class Piece{

    private:
        vector<int> currPos;

        bool color; //this determines piece color

        int pieceType; // this will determine the type of the piece 1=pawn 2=rook



        char rulesForPawn(vector<int> move){
            if (move[0] == currPos[0] + 1){
                return 'm';
            }
            else if (move[0] == currPos[0] + 1 && move[1] == currPos[1] + 1 ){
                return 'a'; 
            }
            else if  (move[0] == currPos[0] + 1 && move[1] == currPos[1] - 1 ){
                return 'a';
            }


        }
        bool rulesForRook(vector<int> move){

        }
        bool rulesForBishop(vector<int> move){

        }
        bool rulesForKnight(vector<int> move){

        }
        bool rulesForQueen(vector<int> move){

        }
        bool rulesForKing(vector<int> move){

        }
    public:

        Piece(vector<int> currPos, bool color, int pieceType){
            currPos = currPos;
            color = color;
            pieceType = pieceType;

        }

        char validpMove(vector<int> move){
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
                break;
            }
     

        }

    





}

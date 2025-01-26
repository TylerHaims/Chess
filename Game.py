import Piece
import Board

class Game:
    def __init__(self, player1, player2):
        self.player1 = player1
        self.player2 = player2
        self.board = Board.Board()
        #will have to change this in initializing the board so the game always knows the postions of the kings
        #this eliminates the need to check for the postion of the kings when seeing if one of the players is in check
        #should I store all of the pieces here?? right now it seeems like I only need the king
        self.white_king = Piece.Piece(6,True,[0,0])
        self.black_king = Piece.Piece(6,False, [0,0])

    #this function should take turns for each of the players
    #it should prompt them for an input 
    #it should also stop the game if there is no way to win or one of the players ffs
    #list of things I want to impliment later:
    #1.)keep track of what pieces have been taken
    #2.) assigne each player a score 
    #3.) an actual UI for the players
    #4.)include most optimal move (this will be very hard to implement)
    #5.)include an online mode were you can play other people
    #6.)add unique game modes
    
    def play_the_game():
        pass

    #this checks to see if the 
    def check_move(self, move, current_pos, player):
        #if player is false 
        move_sqaure =  self.board.get_square(move[0], move[1])
        current_square = self.board.get_square(current_pos[0],current_pos[1])
        if move[0] not in range(8) and move[1] not in range(8):
            return False
        elif move_sqaure.get_piece().color == current_square.get_piece().color:
            return False
        elif self.check_finder(move):
            return False
    #option one:
    #then we check to see if any piece has a direct path to the king 
    #then we pass in the kings position do see if it is a possiblity for that piece to take the king
    #one problem with this line of though is the knigh that can jump over other pieces
    #but there is a very limited number of square in which a knight could take the king 
    #Option two:
    #just check every piece (this option sucks)
    def move_piece(self, current_pos,move,player):
        pass

    def check_finder(self):

        for i in range(8):

        pass
    

    #this method intializes all of the pieces in their staring positions
    def set_the_board(self):
        for i in range(8):
            square = self.board.get_square(1,i)
            square2 = self.board.get_square(6,i)
            square.set_piece(Piece.Piece(1,True,[1,i]))
            square2.set_piece(Piece.Piece(1,False,[6,i]))
        for i in range(8):
            square = self.board.get_square(0,i)
            square2 = self.board.get_square(7,i)
            if i == 0 or i == 7:
                square.set_piece(Piece.Piece(2,True,[0,i]))
                square2.set_piece(Piece.Piece(2,False,[7,i]))
            elif i == 1 or i == 6:
                square.set_piece(Piece.Piece(3,True,[0,i]))
                square2.set_piece(Piece.Piece(3,False,[7,i]))
            elif i == 2 or i == 5:
                square.set_piece(Piece.Piece(4,True,[0,i]))
                square2.set_piece(Piece.Piece(4,False,[7,i]))
            elif i == 4:
                square.set_piece(Piece.Piece(5,True,[0,i]))
                square2.set_piece(self.black_king)
                self.black_king.set_current_pos([7,i])
            elif i == 3:
                square.set_piece(self.white_king)
                self.white_king.set_current_pos([0,i])
                square2.set_piece(Piece.Piece(5,False,[7,i]))






    def __str__(self):
        return str(self.board)
        
        


import Piece

class Board:
    def __init__(self):
        self.side = 8
        self.board = self.create_board()
    


    def create_board(self):
        rows = [0 for i in range(8)]
        for i in range(8):
            rows[i] = [Square(False) for i in range(8)]
            for j in range(8):
                if j%2 == 0 and i%2 != 0:
                    rows[i][j].set_color(True)
                if j%2 != 0 and i%2 == 0:
                    rows[i][j].set_color(True)
        
        return rows
    
    def get_square(self, row, col):
        return self.board[row][col]
    
    


    def __str__(self):
        string = ""
        for row in self.board:
            for col in row:
                string  += str(col)
            string += "\n"
        
        return string



class Square:
    def __init__(self, color):
        self.color = color
        self.piece = False
    
    def set_piece(self, piece):
        self.piece = piece
    

    def get_piece(self):
        return self.piece
    
    def set_color(self, color):
        self.color = color
    
    def get_color(self):
        return self.color
    
    def __str__(self):
        
        if self.get_piece():
            item  = self.get_piece()
            return " " +  str(item.piece)
        elif self.get_color() == False:
            return " X"
        else:
            return " O"

    

            
        
 
        
    
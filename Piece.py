class Piece:
    def __init__(self, piece, color, current_pos):
        self.current_pos = current_pos
        self.color = color
        self.piece = piece
    

    def set_current_pos(self, current):
        self.current_pos = current
        

    def get_current_pos(self):
        return self.current_pos
    #the idea with this method is that it can be used to make sure a move is valid
    #for the specific rules that apply to said piec
    def define_type_rules(self,move) :
        if self.piece == 1:
            return self.rules_for_pawn(self,move)
        if self.piece == 2:
            return self.rules_for_rook(self, move)
        if self.piece == 3:
            return self.rules_for_knight(self, move)
        if self.piece == 4:
            return self.rules_for_bishop(self, move)
        if self.piece == 5:
            return "ahhh no rules I'm invincible!!!"
        if self.piece == 6:
            return self.rules_for_king(self, move)
        else:
            return "dumbass that isn't a piece"
        
    #all of the functions below only check if the move is valid for the said piece
    #the game will check if the move puts the king in 
        
    #pawn is a special case because it has two special attack moves that are 
    # different from its normal move    
    def rules_for_pawn(self,move):

        if move[0] == self.current_pos + 1:
            return "move"
        if move[0] == self.current_pos + 1 and move[1] == self.current_pos + 1:
            return "attack"
        if  move[0] == self.current_pos + 1 and move[1] == self.current_pos - 1:
            return "attack"
        else:
            return "invalid"
        

    def rules_for_rook(self, move):
         #here the rook can only change on axis at a time 
         if move[0] != self.current_pos[0] and move[1] == self.current_pos:
             return "move"
         if move[0] == self.current_pos[0] and move[1] != self.current_pos:
             return "move"
         else:
             return "invalid"
    def rules_for_knight(self, move):
        #this condition is checking for a vertical L 
        if self.current_pos[0]  - 2 <= move[0] <= self.current_pos[0] + 2 and self.current_pos[1] - 1 <= move[1] <= self.current_pos[1] + 1:
            return "move"
        #this condition is checking for a horizantal L
        if self.current_pos[1]  - 2 <= move[1] <= self.current_pos[1] + 2 and self.current_pos[0] - 1 <= move[0] <= self.current_pos[0] + 1:
            return "move"
        else:
            return "invalid"

        pass

    def rules_for_bishop(self, move):
        #the logic here is the bishop must change it's x and y values at the same time or else the move is invalid
        if move[0] != self.current_pos[0] and move[1] != self.current_pos[1]:
            return "move"
        else:
            return "invalid"
        
    def rules_for_king(self, move):
        pass


    

    





    
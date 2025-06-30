
all:test
 
 %.o: %.cpp
	g++ -c $< -o $@
	

testPiece:testPiece.o Piece.o

	g++ testPiece.o Piece.o -lgtest -lgtest_main -pthread -o testPiece


clean:
	rm -f *.o 
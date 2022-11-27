#include "Board.hpp"

int main(){
    Board board(6,7);
    vector<vector<char>> matrix=board.getMatrix();
    board.drawBorder(board.getX(), board.getY(), matrix);
    board.drawLine(board.getY(), matrix);
    board.drawShape(board.getX(), board.getY(), matrix);
    //board.printBoard(matrix);
    Board board1=std::move(board);
    vector<vector<char>> matrix2=board.getMatrix();
    board.printBoard(matrix2);
    cout<<matrix2.size()<<endl;
    board1.printBoard(matrix);
}

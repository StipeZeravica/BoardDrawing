#include "Board.hpp"
//Default
Board::Board(){
    this->x=0;
    this->y=0;
    this->matrix={{' '}};
}
//constructor
Board::Board(double x,double y){
    this->x=x;
    this->y=y;
    for(double i=0;i<x;i++){
        vector<char> vector2;
        for(double j=0;j<y;j++){
            vector2.push_back(' ');
        }
        this->matrix.push_back(vector2);
    }
}
//move
Board::Board(Board &&secondBoard) {
    this->y=secondBoard.getY();
    this->x=secondBoard.getX();
    this->matrix=secondBoard.getMatrix();
    secondBoard.matrix.erase(secondBoard.matrix.cbegin(),secondBoard.matrix.cend());
    secondBoard.setX(NULL);
    secondBoard.setY(NULL);
}
//copy
Board::Board(Board &secondBoard) {
    this->y=secondBoard.getY();
    this->x=secondBoard.getX();
    this->matrix=secondBoard.getMatrix();
}
void Board::drawBorder(double x,double y,vector<vector<char>> &matrix){
    for(double i=0;i<x;i++){
        for(double j=0;j<y;j++){
            if(j==0||j==y-1||i==0||i==x-1){
                matrix.at(i).at(j)='o';

            }
        }
    }
}
void Board::drawLine(double x,vector<vector<char>> &matrix){
    for(double i=0;i<x-1;i++){
        matrix.at(matrix.size()-2).at(i)='x';
    }
}
void Board::drawShape(double x,double y, vector<vector<char>> &matrix){
    double i=1;
    double j=1;
    while(i<x-2 && j<y-1){
        matrix.at(i).at(j)='x';
        j++;
        i++;
    }
}
void Board::printBoard(vector<vector<char>> &matrix){
    for(double i=0;i<matrix.size();i++){
        for(char e:matrix.at(i)){
            cout<<e;
        }
        cout<<endl;
    }
}



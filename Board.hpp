#pragma once
#include <iostream>
#include <vector>
using std::cout;
using std::endl;
using std::vector;
class Board{
private:

    double x;
    double y;
    vector<vector<char>> matrix;
public:
    Board();
    Board(double x,double y);
    Board(Board &secondBoard);
    Board(Board &&secondBoard);
    void setX(double x) {this->x = x;}
    void setY(double y) {this->y = y;}
    void setMatrix(const vector<vector<char>> matrix){this->matrix = matrix;}
    ~Board() { std::cout << "destructed" << std::endl; }
    double  getX(){return this->x;}
    double getY(){return this->y;}
    vector<vector<char>> getMatrix(){return this->matrix;}
    void drawBorder(double x,double y,vector<vector<char>> &matrix);
    void drawLine(double x,vector<vector<char>> &matrix);
    void drawShape(double x,double y, vector<vector<char>> &matrix);
    void printBoard(vector<vector<char>> &matrix);
};
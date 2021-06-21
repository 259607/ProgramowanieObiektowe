#include "tablica.h"
#include "tablica_wysw.h"
#include <string>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>

Array::~Array() {
    for (int i = 0; i < sizeX; i ++){
      for (int j = 0; j < sizeY; j ++){
        delete arr[i][j];
      }
    }
}


void Array::setSize(int x, int y, std::string types) {
    sizeX = x;
    sizeY = y;
    colType = types;
    arr = new Base**[x];
    for(int i = 0; i < sizeX; i++) {
        arr[i] = new Base*[y];
    }

    for(int i = 0; i < sizeY; i++) {
    
        if(colType[i] == 'i') {
            for(int j = 0; j < x; j++) {
                arr[j][i] = new CellInt;
            }
        }
        else {
            for(int j = 0; j < x; j++) {
                arr[j][i] = new CellString;
            }
        }
    }
}

int Array::sumCol(int col) {
    if(colType[col] != 'i')
        throw "Nie można sumować wartości typu String!";
    int sum = 0;
    for(int i = 0; i < sizeX; i++)
        sum += *((int*)arr[i][col]->getValue());
    return sum;
}

int Array::minInCol(int col) {
    if(colType[col] != 'i')
        throw "Nie można wyciągnąć minimum z wartości typu String!";
    int res = 1e8;
    for(int i = 0; i < sizeX; i++)
        res = std::min(res, *((int*)arr[i][col]->getValue()));
    return res;
}

int Array::maxInCol(int col) {
    if(colType[col] != 'i')
        throw "Nie można wyciągnąć maximum z wartości typu String!";
    int res = -1e8;
    for(int i = 0; i < sizeX; i++)
        res = std::max(res, *((int*)arr[i][col]->getValue()));
    return res;
}

double Array::avrInCol(int col) {
    if(colType[col] != 'i')
        throw "Nie można policzyć średniej wartości typu String!";
    double res = 0.0;
    for(int i = 0; i < sizeX; i++)
        res += *((int*)arr[i][col]->getValue());
    return res / sizeX;
}

void Array::resize(int row, int col, std::string types) {
    Base*** newArr = new Base**[sizeX + row];
    colType += types;
    for(int i = 0; i < sizeX + row; i++) {
        newArr[i] = new Base*[sizeY + col];
    }

    for(int i = 0; i < sizeX + row; i++) {
        for(int j = 0; j < sizeY + col; j++) {
            if(colType[j] == 'i')
                newArr[i][j] = new CellInt;
            else
                newArr[i][j] = new CellString;
        }
    }

    for(int i = 0; i < std::min(sizeX, sizeX+row); i++) {
        for(int j = 0; j < std::min(sizeY, sizeY+col); j++) {
            newArr[i][j]->setVal(arr[i][j]->getValue());
        }
    }

    sizeX += row;
    sizeY += col;
    arr = newArr;
}

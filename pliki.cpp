#include "pliki.h"
#include <fstream>
#include <iostream>
#include "tablica.h"

void readFromFile(Array &arr, std::string fileName) {

    int sx;
    int sy;
    std::string cols;
    std::ifstream myFile(fileName, std::ios::in);
    if (myFile.good()){
        
        myFile >> sx;
        myFile >> sy;
        myFile >> cols;
        arr.setSize(sx, sy, cols);

        int val;
        std::string val2;

        for(int i = 0; i < sx; i++) {
            for(int j = 0; j < sy; j++) {
                if (cols[j] == 's'){
                    myFile >> val2;
                    arr.setValue(i, j, val2);
                } else {
                    myFile >> val;
                    arr.setValue(i, j, val);
                }
                
            }
        }

    }
    myFile.close();
}

void saveToFile(Array &arr, std::string fileName) {

    std::ofstream myFile(fileName);

    myFile << arr.sizeX << "\n";
    myFile << arr.sizeY << "\n";
    myFile << arr.colType << "\n";
    for(int i = 0; i < arr.sizeX; i ++) {
    
        for(int j = 0; j < arr.sizeY; j++) {
            if (arr.colType[j] == 's'){
                myFile << *((std::string*)(arr.arr[i][j]->getValue()));
            } else {
                myFile << *((int*)(arr.arr[i][j]->getValue()));
            }
            
            if(j < arr.sizeY - 1)
                myFile << " ";
        }
        myFile << "\n";
    }

    myFile.close();
}

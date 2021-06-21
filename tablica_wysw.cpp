#include "tablica.h"
#include <iostream>
#include <algorithm>

int len(int x, int y, Array &arr) {
    int res = 0;
    if(arr.colType[y] == 's') {
        std::string s = *((std::string*)(arr.arr[x][y]->getValue()));
        res = s.size();
    }
    else {
        int l = *((int*)(arr.arr[x][y]->getValue()));
        if(l == 0)
            res = 1;
        else
            while(l > 0) {
                l /= 10;
                res++;
            }
    }
    return res;
}

int maxlen(Array &arr) {
    int m = 0;
    for(int i = 0; i < arr.sizeX; i++)
        for(int j = 0; j < arr.sizeY; j++)
            m = std::max(m, len(i, j, arr));
    return m;
}

void printArr(Array &arr) {
    int m = maxlen(arr);
    for(int i = 0; i < arr.sizeX; i++) {
        for(int j = 0; j < arr.sizeY; j++) {
            int l = m - len(i, j, arr) + 2;
            
            for(int k = 0; k < l/2; k++)
                std::cout << " ";

            arr.arr[i][j]->pprint();
            
            if(l % 2 == 1)
                l+=2;
            for(int k = 0; k < l/2; k++)
                std::cout << " ";
        }
        std::cout << std::endl;
    }
}

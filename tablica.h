#ifndef ARRAY_H
#define ARRAY_H
#include <string>
#include <vector>
#include <iostream>
class Base {
    public:
        virtual void setVal(void* item) = 0;
        virtual void* getValue() = 0;
        virtual ~Base() = default;
        virtual void pprint() = 0;
};

class CellInt: public Base {
    private:
        int* val;
    public:
        void setVal(void* item) override {
            val = (int*) item;
        }

        void* getValue() {
            return (void*) val;
        }

        CellInt(int newVal = 0) {
            int* k = new int;
            *k = newVal;
            setVal(k);
        }
        
        void pprint() {
             std::cout << *val;
        }
};

class CellString: public Base {
    private:
        std::string* val;
    public:
        void setVal(void* item) override {
            val = (std::string*) item;
        }
        void* getValue() {
            return (void*) val;
        }
        CellString(std::string newVal = "0") {
            std::string* k = new std::string;
            *k = newVal;
            setVal(k);
        }
        
        void pprint() {
             std::cout << *val;
        }
};

class Array {
    private:
        void ErrorIfTypeNotInt(int col);
    public:
        int sizeX;
        int sizeY;
        Base*** arr;
        std::string colType;

    void setSize(int x, int y, std::string colType);

    void setValue(int x, int y, int val) {
        int* k = new int;
        *k = val;
        arr[x][y]->setVal(k);
    }
    
    void setValue(int x, int y, std::string val) {
        std::string* k = new std::string;
        *k = val;
        arr[x][y]->setVal(k);
    }
    
    int sumCol(int col);

    int minInCol(int col);

    int maxInCol(int col);

    double avrInCol(int col);

    void resize(int row, int col, std::string types);

    ~Array();
};
#endif

//
// Created by maile on 07.10.2020.
//

#include "Field.h"


Field::Field() {
    for (int x = 0; x < maxX; ++x) {
        for (int y = 0; y < maxY; ++y) {
            area[accessArr2D(x,y)].x = x;
            area[accessArr2D(x,y)].y = y;
        }
    }
}

int Field::accessArr2D(int x, int y) {
    return y * maxX + x;
}

void Field::clearAll() {

}

void Field::print() {
    char c;

    for (int i = 0; i < maxX; ++i) {
        for (int j = 0; j < maxY; ++j) {
            if (area[accessArr2D(i, j)].state == f) {
                c = ' ';
            } else if (area[accessArr2D(i, j)].state == x) {
                c = 'x';
            } else {
                c = 'o';
            }

            std::cout << "[" << c << "]";
        }
        std::cout << std::endl;
    }
}

void Field::checkWin() {

}



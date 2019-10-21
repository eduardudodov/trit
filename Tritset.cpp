//
// Created by Эдуард on 21.10.2019.
//

#include "Tritset.h"

void Tritset::resize() {
    u_int newCellSize = cellNeeded();
    u_int cellSize = _tritset.size();
    if(newCellSize == cellSize) return;
    else _tritset.resize(newCellSize);
}

Tritset::Tritset() {
    _size = 0;
}



Tritset::Tritset(size_t size) : _size(size) {
    _size = size;
    resize();
}

u_int Tritset::cellNeeded() {
    return _size/TRIT_BIT_SIZE/sizeof(cell_t);
}

trit Tritset::test(size_t pos) const { //TODO
    if(pos >= _size || pos < 0) throw std::out_of_range("bad trit position");
    return trit::False;
}

trit Tritset::operator[](size_t pos) {

    return trit::Unknown;
}





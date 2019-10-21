//
// Created by Эдуард on 21.10.2019.
//

#ifndef TRIT_TRITSET_H
#define TRIT_TRITSET_H

#include <vector>
#include "Trit.h"
#include "Defenitions.h"

class Tritset {
private:
    size_t _size;
    std::vector<cell_t > _tritset;
    void resize();
    u_int cellNeeded();

public:
    Tritset();
    trit test(size_t pos) const;
    Tritset(size_t size);
    friend const Tritset operator&(const Tritset left, const Tritset right);
    friend const Tritset operator||(const Tritset left, const Tritset right);
    friend const Tritset operator!(const Tritset t);
    trit operator[](size_t pos);
};

const Tritset operator&(const Tritset left, const Tritset right) {
    return Tritset();
}
const Tritset operator||(const Tritset left, const Tritset right) {
    return Tritset();
}

const Tritset operator!(const Tritset t) {
    return Tritset();
}



#endif //TRIT_TRITSET_H

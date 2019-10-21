//
// Created by Эдуард on 22.10.2019.
//

#ifndef TRIT_DEFENITIONS_H
#define TRIT_DEFENITIONS_H

#include <sys/_types/_u_int.h>

typedef u_int cell_t;

enum class trit {
    True = 0b01,
    Unknown = 0b11,
    False = 0b00
};


static const u_char MASK = 0b11;
static const u_int TRIT_BIT_SIZE = 2;
static const u_int BYTE = 8;


#endif //TRIT_DEFENITIONS_H

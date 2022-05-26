//
// Created by the80hz on 25.05.2022.
//

#ifndef LABA4_VAR2_DANIIL_FILE_ERROR_H
#define LABA4_VAR2_DANIIL_FILE_ERROR_H

#include "error.h"

class EOpenFile: public error{
public:
    void print() const override;
};

class EInputFile: public error{
public:
    void print() const override;
};

class EOutputFile: public error{
public:
    void print() const override;
};


#endif //LABA4_VAR2_DANIIL_FILE_ERROR_H

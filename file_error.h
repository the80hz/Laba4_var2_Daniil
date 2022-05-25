//
// Created by the80hz on 25.05.2022.
//

#ifndef LABA4_VAR2_DANIIL_FILE_ERROR_H
#define LABA4_VAR2_DANIIL_FILE_ERROR_H

#include "error.h"

class open_file_error: public error{
public:
    void print() const override;
};

class input_file_error: public error{
public:
    void print() const override;
};

class output_file_error: public error{
public:
    void print() const override;
};


#endif //LABA4_VAR2_DANIIL_FILE_ERROR_H

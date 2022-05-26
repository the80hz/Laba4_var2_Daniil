//
// Created by the80hz on 25.05.2022.
//

#include <iostream>
#include "file_error.h"

using namespace std;

void EOpenFile::print() const {
    cout << "Cannot open file";
}

void EInputFile::print() const {
    cout << "Cannot write data";
}

void EOutputFile::print() const {
    cout << "Cannot write file";
}

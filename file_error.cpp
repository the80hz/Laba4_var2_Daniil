//
// Created by the80hz on 25.05.2022.
//

#include <iostream>
#include "file_error.h"

using namespace std;

void open_file_error::print() const {
    cout << "Cannot open file";
}

void input_file_error::print() const {
    cout << "Cannot write data";
}

void output_file_error::print() const {
    cout << "Cannot write file";
}

#include "cube.h"

Cube::Cube::Cube(int length){
    length_ = length;
};

int Cube::Cube::getSize(){
    return length_ * length_;
};

int Cube::getVolume(){
    return length_ * length_ * length_;
};
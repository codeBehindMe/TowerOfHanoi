#include <iostream>
#include "cube.h"

int main(){
  Cube c = Cube(10);
  c.getSize();
  std::cout << "size of cube is " << c.getSize() << std::endl;
  return 0;
}
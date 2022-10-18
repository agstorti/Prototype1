#include "Prototype.hpp"
#include "PrototypeFactory.hpp"
#include "ConcretoPrototype1.hpp"
#include "ConcretoPrototype2.hpp"

#include <iostream>


int main() {
  PrototypeFactory* prototypeFactory{new PrototypeFactory};
  prototypeFactory->Cliente(*prototypeFactory);
  delete prototypeFactory;

  return 0;
};

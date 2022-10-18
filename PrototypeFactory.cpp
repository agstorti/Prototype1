#include "PrototypeFactory.hpp"
#include "Prototype.hpp"
#include "ConcretoPrototype1.hpp"
#include "ConcretoPrototype2.hpp"

#include <iostream>

PrototypeFactory::PrototypeFactory(){
	prototypes_[Type::PROTOTYPE1] = new ConcretoPrototype1("PROTOTYPE1 ", 50.f);
	prototypes_[Type::PROTOTYPE2] = new ConcretoPrototype2("PROTOTYPE2 ", 60.f);
}

PrototypeFactory::~PrototypeFactory() {
	delete prototypes_[Type::PROTOTYPE1];
	delete prototypes_[Type::PROTOTYPE2];
}

Prototype* PrototypeFactory::CreatePrototype(Type type) {
    	return prototypes_[type]->Clone();
  }

void PrototypeFactory::Cliente(PrototypeFactory &prototypeFactory) {
  	std::cout << "Criando o Prototype 1." << std::endl;

  	Prototype *prototype = prototypeFactory.CreatePrototype(Type::PROTOTYPE1);
  	prototype->Method(90);
  	delete prototype;

	std::cout << std::endl;

  	std::cout << "Criando o Prototype 2." << std::endl;

  	prototype = prototypeFactory.CreatePrototype(Type::PROTOTYPE2);
  	prototype->Method(10);

  	delete prototype;
}

#include "ConcretoPrototype1.hpp"
#include <iostream>

ConcretoPrototype1::ConcretoPrototype1(std::string nome, 
		float concretoPrototypeCampo)
	: Prototype{nome}, concretoPrototypeCampo1_{concretoPrototypeCampo}{

}

Prototype* ConcretoPrototype1::Clone() const{
    return new ConcretoPrototype1(*this);
  }

#include "ConcretoPrototype2.hpp"
#include "Prototype.hpp"

#include <iostream>

ConcretoPrototype2::ConcretoPrototype2(std::string nome, 
		float concretoPrototypeCampo)
	: Prototype{nome}, 
	concretoPrototypeCampo2_{concretoPrototypeCampo}{

}

Prototype* ConcretoPrototype2::Clone() const{
    return new ConcretoPrototype2(*this);
  }

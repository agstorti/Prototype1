#include "Prototype.hpp"
#include <iostream>

Prototype::Prototype(){
}

Prototype::Prototype(std::string nome) : nome_{nome}{
}
	
void Prototype::Method(float prototypeCampo) {
 	this->prototypeCampo = prototypeCampo;
    	std::cout << "Call Method from " << nome_ << 
		" with field : " << prototypeCampo << std::endl;
}

#ifndef PROTOTYPE_HPP
#define PROTOTYPE_HPP
#include <iostream>

class Prototype {
public:
	Prototype();
	Prototype(std::string nome);

	virtual ~Prototype() = default;

	virtual Prototype *Clone() const = 0;
	
	virtual void Method(float prototypeCampo);

protected:
	  std::string nome_;
	  float prototypeCampo;
};

#endif

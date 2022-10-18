#ifndef PROTOTYPEFACTORY_HPP
#define PROTOTYPEFACTORY_HPP

#include "Prototype.hpp"
#include <unordered_map>

enum Type {
  PROTOTYPE1 = 0,
  PROTOTYPE2
};

class PrototypeFactory {
public:
	PrototypeFactory();
	
       	~PrototypeFactory();
	
       	void Cliente(PrototypeFactory &prototypeFactory);

	Prototype *CreatePrototype(Type type);

private:
	std::unordered_map<Type, Prototype *, std::hash<int>> prototypes_;

};

#endif


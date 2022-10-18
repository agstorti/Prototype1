#ifndef CONCRETOPROTOTYPE1_HPP
#define CONCRETOPROTOTYPE1_HPP

#include "Prototype.hpp"
#include <iostream>

class ConcretoPrototype1 : virtual public Prototype {
	public:
		ConcretoPrototype1(std::string nome, 
				float concretoPrototypeCampo);

		virtual ~ConcretoPrototype1() = default;

		virtual Prototype *Clone() const override;

	private:
		float concretoPrototypeCampo1_;
};

#endif 

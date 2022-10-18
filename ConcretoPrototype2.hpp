#ifndef CONCRETOPROTOTYPE2_HPP
#define CONCRETOPROTOTYPE2_HPP

#include "Prototype.hpp"
#include <iostream>

class ConcretoPrototype2 : virtual public Prototype {
	public:
		ConcretoPrototype2(std::string nome, float concretoPrototypeCampo);

		virtual ~ConcretoPrototype2() = default;

		virtual Prototype *Clone() const override;

	private:
		float concretoPrototypeCampo2_;
};

#endif 

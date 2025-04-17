#ifndef TARGETGENERATOR_HPP
# define TARGETGENERATOR_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ATarget;

class TargetGenerator {
	private :
		std::map<std::string, ATarget *> targetGen;

	public : 
	TargetGenerator();
	~TargetGenerator();

	void learnTargetType(ATarget * TargetTypePtr);
	void forgetTargetType(std::string const& TargetType);
	ATarget * createTarget(std::string const& TargetType);

};

#endif
#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator() {};

TargetGenerator::~TargetGenerator() {}

void TargetGenerator::learnTargetType(ATarget * TargetTypePtr) {
	if (TargetTypePtr)
		targetGenerator[TargetTypePtr->getType()] = TargetTypePtr;
}

void TargetGenerator::forgetTargetType(std::string const& TargetType) {
	std::map<std::string, ATarget*>::iterator it = targetGenerator.find(TargetType);
		it->second = NULL;
}

ATarget * TargetGenerator::createTarget(std::string const& TargetType) {
	std::map<std::string, ATarget*>::iterator it = targetGenerator.find(TargetType);
	if (it != targetGenerator.end())
		return it->second->clone();
	return NULL;
}

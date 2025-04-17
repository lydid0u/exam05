#include "TargetGenerator.hpp"
#include "ATarget.hpp"

TargetGenerator::TargetGenerator() {};

TargetGenerator::~TargetGenerator() {}

void	TargetGenerator::learnTargetType(ATarget *TargetTypeptr) {
	if (TargetTypeptr)
		targetGen[TargetTypeptr->getType()] = TargetTypeptr;
}

void	TargetGenerator::forgetTargetType(std::string const & TargetTypeName) {
	std::map<std::string, ATarget*>::iterator it = targetGen.find(TargetTypeName);
	if (it != targetGen.end())
		it->second = NULL;
}

ATarget *TargetGenerator::createTarget(std::string const & TargetTypeName){
	std::map<std::string, ATarget*>::iterator it = targetGen.find(TargetTypeName);
	if (it != targetGen.end() && it->second != NULL)
		return (it->second->clone());
	return (NULL);
}

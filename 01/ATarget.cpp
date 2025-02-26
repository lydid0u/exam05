#include "ATarget.hpp"
#include "ASpell.hpp"


ATarget::ATarget(std::string type) : _type(type) {};

ATarget::~ATarget() {}

const std::string& ATarget::getType() const {
	return (_type);
}

void	ATarget::getHitBySpell(const ASpell& aSpellRef) const {
	std::cout << _type << " has been " << aSpellRef.getEffects() << "!" << std::endl;
}

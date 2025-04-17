#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook() {};

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell * SpellPtr) {
	if (SpellPtr)
		spellBook[SpellPtr->getName()] = SpellPtr;
}

void SpellBook::forgetSpell(std::string const & SpellName) {
	std::map<std::string, ASpell *>::iterator it = spellBook.find(SpellName);
	if (it != spellBook.end() && it->second != NULL)
		it->second == NULL;
}

ASpell* SpellBook::createSpell(std::string const &  SpellName) {
	std::map<std::string, ASpell *>::iterator it = spellBook.find(SpellName);
	if (it != spellBook.end() && it->second != NULL)
		return (it->second->clone());
	return (NULL);
}
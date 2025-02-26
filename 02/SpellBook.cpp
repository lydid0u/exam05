#include "SpellBook.hpp"
#include "ASpell.hpp"

SpellBook::SpellBook() {};

SpellBook::~SpellBook() {}

void SpellBook::learnSpell(ASpell * SpellPtr) {
	if (SpellPtr)
		spellBook[SpellPtr->getName()] = SpellPtr;
}

void SpellBook::forgetSpell(std::string const& spellName) {
	std::map<std::string, ASpell*>::iterator it = spellBook.find(spellName);
		it->second = NULL;
}

ASpell * SpellBook::createSpell(std::string const& spellName) {
	std::map<std::string, ASpell*>::iterator it = spellBook.find(spellName);
	if (it != spellBook.end())
		return it->second->clone();
	return NULL;
}

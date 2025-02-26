

#ifndef SPELLBOOK_HPP
# define SPELLBOOK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"

class ASpell;

class SpellBook {
	private :

	public : 
	SpellBook();
	~SpellBook();

	void learnSpell(ASpell * SpellPtr);
	void forgetSpell(std::string const& spellName);
	ASpell * createSpell(std::string const& spellName);
	std::map<std::string, ASpell*> spellBook;

	ASpell* getSpell(const std::string& spellName);
};

#endif
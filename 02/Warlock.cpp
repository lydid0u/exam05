#include "Warlock.hpp"

Warlock::Warlock(std::string name, std::string title) : _name(name), _title(title) {
	std::cout << this->_name << ": This looks like another boring day." << std::endl;
};

Warlock::~Warlock() {
	std::cout << this->_name << ": My job here is done!" << std::endl;
}

void 	Warlock::introduce() const {
	std::cout << this->_name << ": I am " << this->_name << ", " << this->_title << "!" <<  std::endl;
}

const std::string& Warlock::getName() const {
	return (_name);
}

const std::string& Warlock::getTitle() const {
	return (_title);
}

void Warlock::setTitle(const std::string& title) {
	_title = title;
}

void Warlock::learnSpell(ASpell * SpellPtr) {
		book.learnSpell(SpellPtr);
}

void Warlock::forgetSpell(std::string spellName) {
	book.forgetSpell(spellName);
}

void Warlock::launchSpell(std::string spellName, ATarget& aTargetRef) {
	if (book.createSpell(spellName))
		book.createSpell(spellName)->launch(aTargetRef);
}
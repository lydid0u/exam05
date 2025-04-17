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

void	Warlock::learnSpell(ASpell *aspellptr) {
	if (aspellptr)
		spellBook[aspellptr->getName()] = aspellptr;
}

void	Warlock::forgetSpell(std::string SpellName) {
	std::map<std::string, ASpell*>::iterator it = spellBook.find(SpellName);
	if (it != spellBook.end())
		it->second = NULL;
}

void	Warlock::launchSpell(std::string SpellName, ATarget & atargetref) {
	std::map<std::string, ASpell*>::iterator it = spellBook.find(SpellName);
	if (it != spellBook.end() && it->second != NULL)
		it->second->launch(atargetref);
}
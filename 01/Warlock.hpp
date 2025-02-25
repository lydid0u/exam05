#pragma once

#ifndef WARLOCK_HPP
# define WARLOCK_HPP

#include <iostream>
#include <map>
#include "ASpell.hpp"
#include "ATarget.hpp"


class Warlock {
	private :
	std::string _name;
	std::string _title;
	std::map<std::string, ASpell*> spellBook;

	public : 
	Warlock(std::string name, std::string title);
	~Warlock();
	const std::string& getName() const;
	const std::string& getTitle() const;
	void	setTitle(const std::string& title);

	void introduce() const;

	void learnSpell(ASpell * SpellPtr);
	void forgetSpell(std::string spellName);
	void launchSpell(std::string spellName, ATarget& aTargetRef);

};

#endif
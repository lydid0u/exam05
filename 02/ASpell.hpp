 

#ifndef ASPELL_HPP
# define ASPELL_HPP

#include <iostream>

class ATarget;

class ASpell {
	private :
	std::string _name;
	std::string _effects;

	public : 
	ASpell(std::string name, std::string effects);
	virtual ~ASpell();
	const std::string& getName() const;
	const std::string& getEffects() const;

	void	launch(const ATarget& aTargetRef) const ;
	virtual ASpell *clone() const = 0; 
};

#endif
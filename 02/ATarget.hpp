

#ifndef ATARGET_HPP
# define ATARGET_HPP

#include <iostream>

class ASpell;

class ATarget {
	private :
	std::string _type;

	public : 
	ATarget(std::string type);
	virtual ~ATarget();
	const std::string& getType() const;

	virtual ATarget *clone() const = 0; 
	void	getHitBySpell(const ASpell& aSpellRef) const;
};

#endif
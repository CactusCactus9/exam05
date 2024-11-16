#include "ASpell.hpp"

ASpell::ASpell(){}

ASpell::ASpell(const ASpell &obj){*this = obj;}

ASpell          &ASpell::operator=(const ASpell &obj){
    this->name = obj.name;
    this->effects = obj.effects;
    return (*this);
}

ASpell::ASpell(const std::string &name, const std::string &effects){
    this->name = name;
    this->effects = effects;
}

const std::string   &ASpell::getName()const{return (this->name);} 

const std::string   &ASpell::getEffects()const{return (this->effects);}

void                ASpell::launch(const ATarget &tar)const{tar.getHitBySpell(*this);}

ASpell::~ASpell(){}
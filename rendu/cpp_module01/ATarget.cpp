#include "ATarget.hpp"

ATarget::ATarget(){}

ATarget::ATarget(const ATarget &obj){*this = obj;}

ATarget          &ATarget::operator=(const ATarget &obj){
    this->type = obj.type;
    return (*this);
}

ATarget::ATarget(const std::string &type){
    this->type = type;
}

const std::string   &ATarget::getType()const{return (this->type);}

void                ATarget::getHitBySpell(const ASpell &sp)const{
    std::cout << this->type << " has been "<< sp.getEffects() << "!\n";
}

ATarget::~ATarget(){}
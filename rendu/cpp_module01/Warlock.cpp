#include "Warlock.hpp"

Warlock::Warlock(const std::string &name, const std::string &title){
    this->name = name;
    this->title = title;
    std::cout << this->name << ": This looks like another boring day.\n";
}

const std::string   &Warlock::getName()const{return (this->name);} 

const std::string   &Warlock::getTitle()const{return (this->title);}

void                 Warlock::setTitle(const std::string &title){this->title = title;}

void                 Warlock::introduce()const{std::cout << this->name <<": I am " << this->name << ", " << this->title << "!\n";}

Warlock::~Warlock(){std::cout << this->name << ": My job here is done!\n";}

void                Warlock::learnSpell(ASpell *sp){spells[sp->getName()] = sp;}

void                Warlock::forgetSpell(const std::string &name){spells.erase(name);}

void                Warlock::launchSpell(const std::string &name, const ATarget &tar){
    std::map<std::string, ASpell *>::iterator it = spells.find(name);
    if (it != spells.end()){
        it->second->launch(tar);
    }
}
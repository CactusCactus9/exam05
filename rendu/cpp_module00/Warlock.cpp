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
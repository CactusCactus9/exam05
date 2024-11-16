#include "SpellBook.hpp"

SpellBook::SpellBook(){}
SpellBook::~SpellBook(){}
void    SpellBook::learnSpell(ASpell *sp){book[sp->getName()] = sp;}
void    SpellBook::forgetSpell(std::string const &name){book.erase(name);}
ASpell* SpellBook::createSpell(std::string const &name){
    std::map<std::string, ASpell *>::iterator it = book.find(name);
    if (it != book.end())
        return (it->second);
    return (NULL);
}
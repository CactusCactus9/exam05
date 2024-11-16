#ifndef SPELLBOOK_HPP
#define SPELLBOOK_HPP
#include "ASpell.hpp"
#include <iostream>
#include <map>

class SpellBook{
    private:
        std::map<std::string, ASpell *> book;
        SpellBook(const SpellBook &obj);
        SpellBook &operator=(const SpellBook &obj);
    public:
        SpellBook();
        ~SpellBook();
        void    learnSpell(ASpell *sp);
        void    forgetSpell(std::string const &name);
        ASpell* createSpell(std::string const &);
};

#endif
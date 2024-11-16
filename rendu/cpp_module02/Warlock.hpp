#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>
#include "ASpell.hpp"
#include "ATarget.hpp"
#include "SpellBook.hpp"
#include <map>

class Warlock{
    private:
        std::string                     name;
        std::string                     title;
        SpellBook                       spelbook;
        Warlock();
        Warlock(const Warlock &obj);
        Warlock             &operator=(const Warlock &obj);
    public:
        Warlock(const std::string &name, const std::string &title);
        const std::string   &getName()const; 
        const std::string   &getTitle()const;

        void                setTitle(const std::string &title);

        void                introduce()const;

        void                learnSpell(ASpell *sp);
        void                forgetSpell(const std::string &name);
        void                launchSpell(std::string name, const ATarget &tar);

    ~Warlock();
};

#endif

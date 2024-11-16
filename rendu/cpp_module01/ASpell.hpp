#ifndef ASPELL_HPP
#define ASPELL_HPP
#include <iostream>
#include "ATarget.hpp"

class ATarget;

class ASpell{
    private:
        std::string name;
        std::string effects;
    public:
        ASpell();
        ASpell(const ASpell &obj);
        ASpell(const std::string &name, const std::string &effects);
        ASpell             &operator=(const ASpell &obj);
        const std::string   &getName()const; 
        const std::string   &getEffects()const;
        virtual ASpell      *clone()const = 0;
        void                launch(const ATarget &tar)const;
        virtual ~ASpell();
};

#endif
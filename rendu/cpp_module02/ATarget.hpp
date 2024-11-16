#ifndef ATARGET_HPP
#define ATARGET_HPP
#include <iostream>
#include "ASpell.hpp"

class ASpell;
class ATarget{
    private:
        std::string type;
    public:
        ATarget();
        ATarget(const ATarget &obj);
        ATarget(const std::string &type);
        ATarget             &operator=(const ATarget &obj);
        const std::string   &getType()const;
        virtual ATarget     *clone()const = 0;
        void                getHitBySpell(const ASpell &sp)const;  
        virtual ~ATarget();
};

#endif
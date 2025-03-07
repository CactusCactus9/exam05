#ifndef WARLOCK_HPP
#define WARLOCK_HPP
#include <iostream>

class Warlock{
    private:
        std::string name;
        std::string title;
        Warlock();
        Warlock(const Warlock &obj);
        Warlock             &operator=(const Warlock &obj);
    public:
        Warlock(const std::string &name, const std::string &title);
        const std::string   &getName()const; 
        const std::string   &getTitle()const;
        void                setTitle(const std::string &title);
        void                introduce()const;
    ~Warlock();
};

#endif

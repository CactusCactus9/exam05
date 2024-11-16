#ifndef TARGETGENERATOR_HPP
#define TARGETGENERATOR_HPP
#include "ATarget.hpp"
#include <map>

class ATarget;

class TargetGenerator{
    private:
        std::map<std::string, ATarget *> targets;
        TargetGenerator(const TargetGenerator &obj);
        TargetGenerator &operator=(const TargetGenerator &obj);
    public:
        TargetGenerator();
        ~TargetGenerator();
        void     learnTargetType(ATarget *tar);
        void     forgetTargetType(std::string const &name);
        ATarget* createTarget(std::string const &name);
};
#endif
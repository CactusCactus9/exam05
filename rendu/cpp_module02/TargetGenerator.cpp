#include "TargetGenerator.hpp"

TargetGenerator::TargetGenerator(){}
TargetGenerator::~TargetGenerator(){}
void     TargetGenerator::learnTargetType(ATarget *tar){targets[tar->getType()] = tar;}
void     TargetGenerator::forgetTargetType(std::string const &name){targets.erase(name);}
ATarget* TargetGenerator::createTarget(std::string const &name){
    std::map<std::string, ATarget *>::iterator it = targets.find(name);
    if (it != targets.end())
        return (it->second);
    return NULL;
}
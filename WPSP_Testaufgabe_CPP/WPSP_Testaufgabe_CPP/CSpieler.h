#pragma once
#include "CPerson.h"

class CSpieler : public CPerson
{
public:
    enum e_position { torwart, abwehr, mittelfeld, sturm };
    virtual void print() const override {};

protected:
    e_position position = torwart;
    unsigned int nummer = 0;
};
#include "Item.hpp"
#include "iostream"
#include "stdexcept"

using namespace std;

void Item::setName(string name) {
    if(name == "")
    {
        throw invalid_argument(name);
    }
    name = name;
}

string Item::getName()
{
    return name;
}
#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>
using namespace std;

class Item {
    private:
    string name;

    public:
    void setName(string name);
    string getName();
};

#endif
#include "Item.hpp"
#include <iostream>
using namespace std;

int main()
{
    Item* item = new Item();
    try 
    {
        item -> setName("");
    }
    catch(invalid_argument const& ex)
    {
        cout << ex.what() << endl;
    }

}
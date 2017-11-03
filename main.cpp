//
//  main.cpp
//  Eul_3
//
//  Created by Petros on 01/11/2017.

#include "class.hpp"

int main(int argc, char** argv)
{
    Width w{2};
    Length l{4};
    if (argc > 1)
    {
        w = argv[1];
        l = argv[2];
    }
    
    Rectangle* box = new Rectangle(w,l);
    box->set_length(5);
    box->set_width(2);
    std::cout << box->get_area() << std::endl;
    std::cout << box->get_length();
    std::cout << "\nExit" << std::endl;
    delete box;
    return(0);
}

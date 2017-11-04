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
        if ((argv[1]) != NULL && (argv[2]) != NULL)
        {
            w = atoi(*argv[1]);
            l = (int)(*argv[2]);
            std::cout << w << " " << l << std::endl;
        }
    }
    else
    {
        std::cout << "Set width and length : " << std::endl;
        int i_w, i_l;
        std::cin >> i_w >> i_l;
        w.set_width(i_w);
        l.set_length(i_l);
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

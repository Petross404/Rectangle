//
//  main.hpp
//  Eul_3
//
//  Created by Petros on 01/11/2017.
//  Copyright © 2017 Petros. All rights reserved.
//

#ifndef main_hpp
#define main_hpp

#include <stdio.h>
#include <iostream>

class Width
{
private:
    int width;
    
public:
    
    Width(int w);
    virtual void set_width(int w);
    virtual int get_width();
    operator int() const;
};

class Length
{
private:
    int length;
    
public:
    Length(int l);
    virtual void set_length(int l);
    virtual int get_length();
    operator int() const;
};

class Rectangle : public Width, public Length
{
private:
    int m_w;
    int m_l;
    
public:
    Rectangle(Width w, Length l);
    virtual void set_width(Width w);
    virtual void set_length(Length l);
    virtual int get_width();
    virtual int get_length();
    int get_area();
    
};

#endif /* main_hpp */

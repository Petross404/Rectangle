//
//  class.cpp
//  Rectangle
//
//  Created by Petros on 02/11/2017.
//  Copyright © 2017 Petros. All rights reserved.
//
#include "class.hpp"

Width::Width(int w)
{
    this->width = w;
}

void Width::set_width(int w)
{
    this->width = w;
}

int Width::get_width()
{
    return this->width;
}

Width::operator int() const
{
    return this->width;
}


Length::Length(int l)
{
    this->length = l;
}

void Length::set_length(int l)
{
    this->length = l;
}

int Length::get_length()
{
    return this->length;
}

Length::operator int() const
{
    return this->length;
}

Rectangle::Rectangle(Width w, Length l) : Width(w), Length(l)
{
    this->m_w = w;
    this->m_l = l;
}

int Rectangle::get_area()
{
    return m_w * m_l;
}

void Rectangle::set_width(Width w)
{
    this->m_w = w;
}

void Rectangle::set_length(Length l)
{
    this->m_l = l;
}

int Rectangle::get_width()
{
    return m_w;
}

int Rectangle::get_length()
{
    return m_l;
}

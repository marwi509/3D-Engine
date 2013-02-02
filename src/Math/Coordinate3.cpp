#include "Coordinate3.hpp"

Coordinate3::Coordinate3()
{
    SetX(0.0f);
    SetY(0.0f);
    SetZ(0.0f);
}

Coordinate3::~Coordinate3()
{
    //dtor
}

Coordinate3::Coordinate3(const Coordinate3& other)
{
    this -> SetX(other.GetX());
    this -> SetY(other.GetY());
    this -> SetZ(other.GetZ());
}

Coordinate3& Coordinate3::operator=(const Coordinate3& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    return *(new Coordinate3(rhs));
}

float Coordinate3::GetX() const
{
    return this -> x;
}

float Coordinate3::GetY() const
{
    return this -> y;
}

float Coordinate3::GetZ() const
{
    return this -> z;
}

float Coordinate3::SetX(float value)
{
    return x = value;
}

float Coordinate3::SetY(float value)
{
    return y = value;
}

float Coordinate3::SetZ(float value)
{
    return z = value;
}

float Coordinate3::operator[](int index) const
{
    switch (index)
    {
        case 0:
            return this -> GetX();
            break;
        case 1:
            return this -> GetY();
            break;
        case 2:
            return this -> GetZ();
            break;
    }
    return 0.0f;
}

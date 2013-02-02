#include "Vector3.hpp"

Vector3::Vector3() : Coordinate3()
{

}

Vector3::~Vector3()
{
    this -> ~Coordinate3();
}

Vector3::Vector3(const Vector3& other) : Coordinate3((Coordinate3) other)
{


}






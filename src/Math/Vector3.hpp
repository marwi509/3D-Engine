#include "Coordinate3.hpp"

#ifndef VECTOR3_H
#define VECTOR3_H


class Vector3 : public Coordinate3
{
    public:
        Vector3();
        virtual ~Vector3();
        Vector3(const Vector3& other);
        Vector3& operator=(const Vector3& other);

    protected:
    private:
};

#endif // VECTOR3_H

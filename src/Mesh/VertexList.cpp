#include "VertexList.hpp"

VertexList::VertexList()
{
    //ctor
}

VertexList::~VertexList()
{
    //dtor
}

VertexList::VertexList(const VertexList& other)
{
    //copy ctor
}

VertexList& VertexList::operator=(const VertexList& rhs)
{
    if (this == &rhs) return *this; // handle self assignment
    //assignment operator
    return *this;
}

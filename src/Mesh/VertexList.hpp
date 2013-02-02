#ifndef VERTEXLIST_H
#define VERTEXLIST_H


class VertexList
{
    public:
        VertexList();
        virtual ~VertexList();
        VertexList(const VertexList& other);
        VertexList& operator=(const VertexList& other);
    protected:
    private:
        float * vertexArray;
        int size;
};

#endif // VERTEXLIST_H

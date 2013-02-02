#ifndef COORDINATE3_H
#define COORDINATE3_H


class Coordinate3
{
    public:
        Coordinate3();
        virtual ~Coordinate3();
        Coordinate3(const Coordinate3& other);
        Coordinate3& operator=(const Coordinate3& other);

        float GetX() const;
        float GetY() const;
        float GetZ() const;

        float SetX(float x_in);
        float SetY(float y_in);
        float SetZ(float z_in);

        float operator[](int index) const;
    protected:
        float x,y,z;
    private:
};

#endif // COORDINATE3_H

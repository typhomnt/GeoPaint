#ifndef FACE_H
#define FACE_H
#include "halfedge.h"

class Face
{
public:
    Face();
    Face( unsigned int id, HalfEdge firstEdge, HalfEdge secondEdge, HalfEdge thirdEdge, HalfEdge fourthEdge, QColor color);
    bool operator=(const Face & face)
    {
        return face.id == id;
    }
private:
    unsigned int id;
    HalfEdge firstEdge;
    HalfEdge secondEdge;
    HalfEdge thirdEdge;
    HalfEdge fourthEdge;
    QColor color;

};

#endif // FACE_H

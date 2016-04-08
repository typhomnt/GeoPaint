#ifndef HALFEDGE_H
#define HALFEDGE_H
#include "edge.h"
class HalfEdge
{
public:
    HalfEdge();
    HalfEdge(unsigned int edgeId, bool orientation);
private:
    unsigned int edgeId;
    bool orientation;
};

#endif // HALFEDGE_H

#include "halfedge.h"
HalfEdge::HalfEdge()
{

}

HalfEdge::HalfEdge(unsigned int edgeId, bool orientation):
    edgeId(edgeId), orientation(orientation)
{
}

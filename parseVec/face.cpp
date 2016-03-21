#include "face.h"

Face::Face()
{

}

Face::Face(unsigned int id, HalfEdge firstEdge, HalfEdge secondEdge, HalfEdge thirdEdge, HalfEdge fourthEdge, QColor color):
    id(id), firstEdge(firstEdge), secondEdge(secondEdge), thirdEdge(thirdEdge), fourthEdge(fourthEdge), color(color)
{
}

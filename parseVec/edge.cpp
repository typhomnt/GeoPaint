#include "edge.h"

Edge::Edge()
{

}

Edge::Edge(unsigned int id, unsigned int startVertexId, unsigned int endVertexId, unsigned int thickness, vector<QPointF> curve, QColor color):
    id(id), startVertexId(startVertexId), endVertexId(endVertexId), thickness(thickness), curve(curve), color(color)
{
}


void Edge::setId(unsigned int id)
{
    this->id = id;
}

void Edge::setThickness(unsigned int thickness)
{
    this->thickness = thickness;
}

void Edge::setStartVertexId(unsigned int startVertexId)
{
    this->startVertexId = startVertexId;
}

void Edge::setEndVertexId(unsigned int endVertexId)
{
    this->endVertexId = endVertexId;
}

void Edge::addPointToCurve(QPointF point)
{
    curve.push_back(point);
}

void Edge::setColor(QColor color)
{
    this->color = color;
}

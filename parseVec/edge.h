#ifndef EDGE_H
#define EDGE_H
#include "vertex.h"
#include <vector>

using std::vector;
class Edge
{
public:
    Edge();
    Edge(unsigned int id, unsigned int startVertexId, unsigned int endVertexId, unsigned int thickness, vector<QPointF> curve, QColor color = QColor(0,0,255));
    bool operator=(const Edge & edge)
    {
        return edge.id == id;
    }

    void setId(unsigned int id);
    void setThickness(unsigned int thickness);
    void setStartVertexId(unsigned int startVertexId);
    void setEndVertexId(unsigned int endVertexId);
    void addPointToCurve(QPointF point);
    void setColor(QColor color);

private:
    unsigned int id;
    unsigned int startVertexId;
    unsigned int endVertexId;
    unsigned int thickness;
    vector<QPointF> curve;
    QColor color;


};

#endif // EDGE_H

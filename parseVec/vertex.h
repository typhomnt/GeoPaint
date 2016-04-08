#ifndef VERTEX_H
#define VERTEX_H
#include <QtGui/QColor>
#include <QPointF>
class Vertex
{
public:
    Vertex();
    Vertex(unsigned int id, QPointF position, QColor color = QColor(0,255,0));
    bool operator=(const Vertex & vertex)
    {
        return vertex.id == id;
    }

    void setId(unsigned int id);
    void setPosition(QPointF position);
    void setColor(QColor color);
    void printVertex();

private:
    unsigned int id;
    QPointF position;
    QColor color;

};

#endif // VERTEX_H

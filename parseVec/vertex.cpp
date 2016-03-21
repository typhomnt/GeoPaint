#include "vertex.h"
#include <iostream>

Vertex::Vertex()
{

}

Vertex::Vertex(unsigned int id, QPointF position, QColor color):
    id(id), position(position), color(color)
{
}

void Vertex::setId(unsigned int id)
{
    this->id = id;
}

void Vertex::setPosition(QPointF position)
{
    this->position = position;
}

void Vertex::setColor(QColor color)
{
    this->color = color;
}


void Vertex::printVertex()
{
    std::cout << id << " " << position.x() << " " << position.y() << " " << color.red() << " " << color.green() << " " << color.blue() << std::endl;
}

#include "vec.h"

Vec::Vec()
{
    vertices = vector<Vertex>();
    edges = vector<Edge>();
    faces = vector<Face>();
}

void Vec::addVertex(Vertex vertex)
{
    vertices.push_back(vertex);
}

void Vec::addEdge(Edge edge)
{
    edges.push_back(edge);
}

void Vec::addFace(Face face)
{
    faces.push_back(face);
}

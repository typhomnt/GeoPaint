#ifndef VEC_H
#define VEC_H
#include "vertex.h"
#include "edge.h"
#include "face.h"
class Vertex;
class Edge;
class Face;
class Vec
{
public:
    Vec();
    void addVertex(Vertex vertex);
    void addEdge(Edge edge);
    void addFace(Face face);
private:
    vector<Vertex> vertices;
    vector<Edge> edges;
    vector<Face> faces;
};

#endif // VEC_H

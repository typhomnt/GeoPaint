#include <QCoreApplication>
#include "pugixml-1.7/src/pugixml.cpp"
#include <string>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include "vec.h"
int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    Vec vec = Vec();
    Vertex tmpVertex;

    pugi::xml_document doc;
    pugi::xml_parse_result result = doc.load_file("../chartreuse.vec");
    pugi::xml_node object = doc.child("vec").child("layer").child("objects");
    for (pugi::xml_node cell = object.first_child(); cell; cell = cell.next_sibling())
    {
        //std::cout << cell.name() << std::endl;
        if(strcmp(cell.name(),"vertex") == 0)
        {
            tmpVertex = Vertex();
            for (pugi::xml_attribute attr = cell.first_attribute(); attr; attr = attr.next_attribute())
            {
                if(strcmp(attr.name(),"id") == 0)
                    tmpVertex.setId(atoi(attr.value()));
                else if(strcmp(attr.name(),"position") == 0)
                {
                    std::string fs(attr.value());
                    size_t found =  fs.find_first_of(' ');
                    tmpVertex.setPosition(QPointF(atof(fs.substr(0,found).c_str()),atof(fs.substr(found + 1, std::string::npos).c_str())));
                }
                else if(strcmp(attr.name(),"color") == 0)
                {
                    int comaIndex = 0;
                    while(attr.value()[comaIndex] != ',')
                        comaIndex++;
                    tmpVertex.setColor(QColor(attr.value()[comaIndex - 1] - '0',attr.value()[comaIndex +1] - '0',attr.value()[comaIndex + 3] - '0'));
                }

             //std::cout << " " << attr.name() << "=" << attr.value() << std::endl;
            }
            tmpVertex.printVertex();
            vec.addVertex(tmpVertex);
        }
        else if(strcmp(cell.name(),"edge") == 0)
        {

        }
    }

    return a.exec();
}

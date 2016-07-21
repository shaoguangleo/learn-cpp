#ifndef TREE_H
#define TREE_h

#include <iostream>

class Tree
{
    int height;
public:
    Tree(int tree_height) : height(tree_height){}
    ~Tree(){std::cout << "*";}
    friend std::ostream&
    operator<<(std::ostream& os,const Tree* t)
    {
        return os << "Tree height is: "
                << t->height << std::endl;
    }
};

#endif // TREE_H
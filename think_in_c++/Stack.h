#ifndef LEARN_CPP_STACK_H
#define LEARN_CPP_STACK_H


class Stack {
    struct Link{
        void * data;
        Link * next;
        Link(void *dat, Link * nxt);
        ~Link();
    }*head;

public:
    Stack();
    ~Stack();
    void push(void * dat);
    void *peek();
    void *pop();

};

#endif //LEARN_CPP_STACK_H

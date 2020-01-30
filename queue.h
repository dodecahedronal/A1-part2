//lang::CwC
#pragma once

#include <stdio.h>
#include "object.h"

/////////////////////////////////////////
// Queue class
class Queue : public Object
{
public:

    //Default constructor 
    Queue();

    // Default constructor
    ~Queue();

    // return the size of Q
    size_t size();

    //enqueue Object data to the end of the queue
    virtual void enqueue(Object* data);

    //returns and removes object from the beginning of queue
    virtual Object* dequeue();
    
    // returns true if queue is empty, 0 otherwise
    virtual bool empty();

    // removes all elements from Q
    void clear();

    // Compares o with this queue for equality.
    bool equals(Object* o);

    // print all elements in Q
    virtual void print();

    // returns hash code for Q
    size_t hash() { return 0; }
};


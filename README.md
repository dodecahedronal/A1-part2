#QUEUE

_Queue()_
Default constructor 

_~Queue()_
Default destructor

_size_t size()_
return the size of Q

_virtual void enqueue(Object *data)_
enqueue Object data to the end of the queue

_virtual Object* dequeue()_
returns and removes object from the beginning of queue
    
_virtual bool empty()_
returns true if queue is empty, 0 otherwise

_void clear()_
removes all elements from Q

_bool equals(Object *o)_
Compares o with this queue for equality.

_virtual void print()_
print all elements in Q

_size_t hash()_
returns hash code for Q
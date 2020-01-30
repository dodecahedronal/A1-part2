// lang::CwC

#include "string.h"
#include "object.h"
#include "queue.h"

int main(int argc, char** argv) {
  Queue q;
  q.enqueue(new String("first"));
  q.enqueue(new String("seoncd"));
  q.enqueue(new String("third"));
  q.print();

  q.dequeue();
  q.print();

  q.dequeue();
  q.print();

  q.dequeue();
  q.print();
}
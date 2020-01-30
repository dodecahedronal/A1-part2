//lang::CwC
#include "helper.h"  // Your file, with any C++ code that you need
#include "object.h"  // Your file with the CwC declaration of Object
#include "string.h"  // Your file with the String class
#include "queue.h"

void FAIL() {   exit(1);    }
void OK(const char* m) { printf("%s\n", m); }
void t_true(bool p) { if (!p) FAIL(); }
void t_false(bool p) { if (p) FAIL(); }

void test_enqueue_clear_empty()
{
	Object* s1 = new String("a");
	Object* s2 = new String("b");
	Object* s3 = new String("c");
    Queue* q = new Queue();

	q->enqueue(s1);
    t_true(q->size()==1);

    q->enqueue(s2);
    t_true(q->size()==2);
    
    q->enqueue(s3);
    t_true(q->size()==3);

    q->clear();
    t_true(q->size() == 0);

    t_true(q->empty() == true);
}

void test_dequeue()
{
	Object* s1 = new String("a");
	Object* s2 = new String("b");
	Object* s3 = new String("c");
	Queue* q = new Queue();

	q->enqueue(s1);
    q->enqueue(s2);
    q->enqueue(s3);
	
    t_true(q->size() == 3);
	t_true(q->dequeue() == s1);
    t_true(q->dequeue() == s2);
    t_true(q->dequeue() == s3);
    t_true(q->size() == 0);
}

void test_equals()
{
    Object* s1 = new String("a");
	Object* s2 = new String("b");

    Object* t1 = new String("a");
	Object* t2 = new String("b");

	Queue* q1 = new Queue();
	Queue* q2 = new Queue();

	q1->enqueue(s1);
    q1->enqueue(s2);

	q2->enqueue(t1);
    q2->enqueue(t2);
    t_true(q1->equals(q2));

    q1->dequeue();
    t_false(q1->equals(q2));
}

int main(int agc, char** argv) {

    test_enqueue_clear_empty();
    test_dequeue();
    test_equals();
    OK("test succeed\n");
}
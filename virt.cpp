
#include <assert.h>

class A {
    public: virtual int foo (int bar = 5) { return bar; }
};
class B: public A {
    public: int foo( int bar = 7) { return bar * 2; }
};
int main( int argc, char *argv[] ) {
    A *a = new B;
    assert(a->foo() == 10);
    return 0;
}

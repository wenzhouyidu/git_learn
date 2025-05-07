#include <iostream>

class Foo {
    public:
      Foo(int a, int b) : a_(a), b_(b) {}
      ~Foo() {}
    
    private:
      int a_;
      int b_;
};
    
int main(int argc, char** argv) {
    auto *p = new Foo(100, 200);
    int a = 1;
    delete p;
    return 0;
}
    
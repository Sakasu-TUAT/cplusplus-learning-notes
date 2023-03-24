#include <iostream>
using namespace std;

template<class Derived>
class Base {
public:
    void foo(){
        static_cast<Derived*>(this)->bar();
    }
};

class Derived : public Base<Derived> {
public:
    void bar(){
        cout << "bar" << endl;
    }
};

int main(){
    Derived d;
    d.foo();
}
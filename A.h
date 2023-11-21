#include "B.h"
#include <thread>


class A{
    public:
        A(B* classB);
        void threadFunction();
        void intermediateThreading();

    private:
        B* class_B;

};
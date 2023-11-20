#include "B.h"
#include <thread>


class A{
    public:
        A(B* classB);
        void threadFunction();
        // void test(void *context);


    private:
        B* class_B;

};
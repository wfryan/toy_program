#include "B.h"
#include <thread>


class A{
    public:
        A(B* classB);
        void threadFunction();
        

    private:
        B* class_B;

};
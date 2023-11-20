#include "C.h"
#include <thread>

class B{
    
    public:
        B(C* classC);
        void printC();
    private:
        C* class_c;
};
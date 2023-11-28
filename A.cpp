#include "A.h"

A::A(B* classB){
    class_B = classB;
}



void A::threadFunction(){
    std::thread threadProcThunk(B::intermediateThreading, this);
    threadProcThunk.join();
}
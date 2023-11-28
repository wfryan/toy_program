#include "D.h"
#include <thread>

class B{
    
    public:
        B(PVIDEO_STATS m_videoStats);
        static void intermediateThreading(void* context);
        void printStats();
    private:
        PVIDEO_STATS m_VideoStats;
};
#include <iostream>
#include "Simulator.h"

using namespace std;

int main(void)
{
    //switch to use the real data from image api for alphapoker
    //Simulator::Instance()->RealTimeRun();
    //swtich to use the mock data to test alphapoker
    Simulator::Instance()->RealTimeMock();
    return 0;
}

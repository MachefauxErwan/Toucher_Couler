#include "CControlOpengl.h"

using namespace std;

int main()
{
    CControlOpengl *controlOpengl = new CControlOpengl();

    controlOpengl->init();
    controlOpengl->run();

    return 0;
}

#include <iostream>

#include "mavlink_control.h"
#include "configParam.h"

using namespace std;

int main(int argc, char **argv);

int main(int argc, char **argv) {
    try {
        ConfigParam configParam(argc, argv);

        cout << "Starting main in " << configParam.mode << " mode " << endl;
        Mavlink_Control mavlinkControl(&configParam);
        mavlinkControl.start();
        mavlinkControl.stop();

        return 0;
    }
    catch (int error) {
        fprintf(stderr, "threw exception %i \n", error);
        return error;
    }
}

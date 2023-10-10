/*
 * Copyright © 2023 Sietium Semiconductor.
 */

#ifndef __RVG_SIM_H__
#define __RVG_SIM_H__

#include <cstdio>
#include <cstdint>

#include "rvgsim.h"

#include "rvg_device.hpp"

class RVGSim: public RVGDevice {
public:
    RVGSim();
    void TestFact () {
        printf("this is RVGSim\n");
    }

private:
    rvgsim *sim;
};

#endif // __RVG_DEVICE_H___

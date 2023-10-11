/*
 * Copyright © 2023 Sietium Semiconductor.
 */

#include "rvgpu.hpp"

#include "rvg_sim.hpp"
#include "rvg_phy.hpp"

RVGPU::RVGPU() {
    dev = new RVGSim();

    dev->TestFact();
}

uint64_t RVGPU::gpu_malloc(uint32_t size) {
    return dev->gpu_malloc(size);
}

void RVGPU::gpu_memcpy(uint64_t dst, const uint64_t src, uint32_t count, bool host_to_device) {
    dev->gpu_memcpy(dst, src, count, host_to_device);
    return;
}
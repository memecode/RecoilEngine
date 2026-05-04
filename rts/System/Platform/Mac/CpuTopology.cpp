#include "System/Platform/CpuTopology.h"


namespace cpu_topology {

    int get_cpu_count() {
	    return 6;
    }

    void set_cpu_affinity(uint32_t cpu) {
    }

    ProcessorCaches GetProcessorCache() {
        ProcessorCaches processorCaches;
        return processorCaches;
    }

    ProcessorMasks GetProcessorMasks() {
        ProcessorMasks processorMasks;
        return processorMasks;
    }

    ThreadPinPolicy GetThreadPinPolicy() {
        return THREAD_PIN_POLICY_ANY_PERF_CORE;
    }
}
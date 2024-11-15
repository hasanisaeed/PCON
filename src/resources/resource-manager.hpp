#pragma once

class ResourceManager
{
public:
    void allocateResources(int cores, int gpuId);
    void releaseResources();

private:
    int allocatedCores;
    int allocatedGpuId;
};

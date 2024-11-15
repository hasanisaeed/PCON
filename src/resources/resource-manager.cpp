#include "resource-manager.hpp"

void ResourceManager::allocateResources(int cores, int gpuId)
{
    allocatedCores = cores;
    allocatedGpuId = gpuId;
    // Logic to bind the process to specific cores and GPUs
}

void ResourceManager::releaseResources()
{
    // Logic to release or unbind resources
}

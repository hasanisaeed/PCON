#pragma once
#include "compute-engine.hpp"
#include "resource-manager.hpp"
#include "task.hpp"

class WorkerNode
{
public:
    void executeTask(Task *task);

private:
    ComputeEngine *computeEngine;
    ResourceManager resourceManager;
};

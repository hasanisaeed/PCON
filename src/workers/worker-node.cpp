#include "task.hpp"
#include "worker-node.hpp"

void WorkerNode::executeTask(Task *task)
{
    // Allocate resources
    resourceManager.allocateResources(/* cores */, /* gpuId */);

    // Execute the task using the compute engine
    computeEngine->compute();

    // Release resources
    resourceManager.releaseResources();
}

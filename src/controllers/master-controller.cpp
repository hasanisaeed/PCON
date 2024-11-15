#include "task.hpp"
#include "master-controller.hpp"

void MasterController::scheduleTask(Task *task)
{
    // Serialize task and resource requirements
    std::string serializedTask = "TODO" /* serialization logic */;

    // Send task to worker node
    networkManager.sendData("worker_ip_address", serializedTask);
}

#pragma once
#include "task.hpp"
#include "resource-manager.hpp"
#include "network-manager.hpp"

class MasterController
{
public:
    void scheduleTask(Task *task);

private:
    ResourceManager resourceManager;
    NetworkManager networkManager;
};

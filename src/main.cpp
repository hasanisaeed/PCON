#include "controllers/master-controller.hpp"
#include "tasks/task.hpp"

int main()
{
    MasterController masterController;
    Task *myTask = NULL /* create specific task */;
    masterController.scheduleTask(myTask);
    return 0;
}

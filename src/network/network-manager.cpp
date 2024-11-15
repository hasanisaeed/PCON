#include "network-manager.hpp"
#include <sys/socket.h>
#include <arpa/inet.h>

void NetworkManager::sendData(const std::string &ip, const std::string &data)
{
    // Create socket and connect to the worker node
    // Send data over the socket
}

std::string NetworkManager::receiveData()
{
    // Listen on a port and receive data
    return receivedData;
}

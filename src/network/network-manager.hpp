#pragma once
#include <string>

class NetworkManager
{
public:
    void sendData(const std::string &ip, const std::string &data);
    std::string receiveData();
};

#pragma once

class ComputeEngine
{
public:
    virtual void compute() = 0;
    virtual ~ComputeEngine() = default;
};

__global__ void computeKernel(float* data) {
    int idx = threadIdx.x + blockIdx.x * blockDim.x;
    // Perform computation
    data[idx] = /* computation logic */;
}

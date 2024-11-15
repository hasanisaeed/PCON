/* TDOD
void GPUComputeEngine::compute()
{
    // Allocate device memory
    float *d_data;
    cudaMalloc(&d_data, size * sizeof(float));

    // Launch kernel
    computeKernel<<<gridSize, blockSize>>>(d_data);

    // Copy results back
    cudaMemcpy(h_data, d_data, size * sizeof(float), cudaMemcpyDeviceToHost);

    // Free device memory
    cudaFree(d_data);
}
*/
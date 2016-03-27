float** copy_matrix_host_to_device(float** host_matrix, int size) {
	float** device_matrix;
	cudaMalloc((void***)&device_matrix, sizeof(float *) * size);


	for(int i = 0; i < size; i++) {
		float* temp_ptr;
		cudaMalloc((void**)&temp_ptr, sizeof(float) * size);
		cudaMemcpy(temp_ptr, host_matrix[i], sizeof(float) * size, cudaMemcpyHostToDevice);
		cudaMemcpy(device_matrix + i, &temp_ptr, sizeof(float *), cudaMemcpyHostToDevice);
	}

	
	return device_matrix;
}
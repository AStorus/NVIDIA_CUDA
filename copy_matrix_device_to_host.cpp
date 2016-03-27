float** copy_matrix_device_to_host(float** device_matrix, int size) {
	float** host_matrix = (float**)malloc(sizeof(float*) * size);
	for(int i = 0; i < MATRIX_SIZE; i++) {
		cudaMemcpy(host_matrix + i, device_matrix + i, sizeof(float*), cudaMemcpyDeviceToHost);
	}

	for(int i = 0; i < size; i++) {
		float* matrix_row = (float*)malloc(sizeof(float) *size);
		cudaMemcpy(matrix_row, host_matrix[i], sizeof(float) * size, cudaMemcpyDeviceToHost);
		memcpy(&host_matrix[i], &matrix_row, sizeof(float*));
	}
	return host_matrix;
}
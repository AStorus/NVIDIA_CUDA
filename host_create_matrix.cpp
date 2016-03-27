float** host_create_matrix(int size) {
	float** matrix = new float*[size];
	for(int i = 0; i < size; i++) {
		matrix[i] = new float[size];
	}

	for(int y = 0; y < size; y++) {
		for(int x = 0; x < size; x++) {
			matrix[y][x] = static_cast <float> (rand()) / static_cast <float> (RAND_MAX/(10));
		}
	}
	return matrix;
}
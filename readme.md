USAGE: 

	//assuming you already have a matrix_a allocated on the device somewhere

	float** matrix_a = host_create_matrix(MATRIX_SIZE);
	float** matrix_a_device = copy_matrix_host_to_device(matrix_a, MATRIX_SIZE);
	float** matrix_a_host = copy_matrix_device_to_host(matrix_a_device, MATRIX_SIZE);
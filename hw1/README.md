./matrix_init.c -o matrix_init
gcc -O3 ./matrix_init.c -o matrix_init_O3
gcc -O3 -S ./matrix_init.c // generates matrix_init.s file
objdump ./matrix_init_O3 -S > objdump_matrix_init.txt
hexdump -C ./matrix_init_O3 > hexdump_matrix_init.txt

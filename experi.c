#include <omp.h>
#include <stdio.h>
#include <stdlib.h>  // Include for atoi

#define ARRAY_SIZE 12
//#define HLINE "-------------------------------------------------\n"

int main(int argc, char *argv[]) {
    int k, n_threads, thread_seq;

    // Determine the number of threads to use
    if (argc == 1) {
        #ifdef _OPENMP
        n_threads = omp_get_max_threads();
        printf("Threads in parallel part: %d\n", n_threads);
        #else
        n_threads = 1; // Default to 1 thread if OpenMP is not enabled
        printf("Threads in sequential part: %d\n", n_threads);
        #endif
        //printf("Threads in sequential part: %d\n", n_threads);
    } else {
        n_threads = atoi(argv[1]);
        printf("Number of Threads specified by user: %d\n", n_threads);
    }

    // Sequential part with thread ID (which is always 0 in sequential part)
    printf("Sequential part: Hello from thread %d\n", omp_get_thread_num());
    printf("Sequential part: Hello from thread %d\n", omp_get_thread_num());
    printf("Sequential part: Hello from thread %d\n", omp_get_thread_num());
    printf("Sequential part: Hello from thread %d\n", omp_get_thread_num());

    #ifdef _OPENMP
    // Set the number of threads for the parallel region
    omp_set_num_threads(n_threads);

    // Enter a parallel region
    #pragma omp parallel
    {
        // Print hello from each thread
        printf("Parallel part: Hello from thread %d\n", omp_get_thread_num());

        #pragma omp master
        {
            k = n_threads;
            printf("Number of Threads requested = %i\n", k);
        }
    }

    k = 0;
    #pragma omp parallel
    {
        #pragma omp atomic
        k++;
    }
    // Print the number of threads counted in the parallel region
    printf("Number of Threads counted = %i\n", k);
    #endif

    return 0;
}

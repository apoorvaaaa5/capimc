# capimc
In experi I tried executing code in sequential and parallel for various core count
core 1,
OUTPUT:
Number of Threads specified by user: 1
Sequential part: Hello from thread 0
Sequential part: Hello from thread 0
Sequential part: Hello from thread 0
Sequential part: Hello from thread 0
Parallel part: Hello from thread 0
Number of Threads requested = 1
Number of Threads counted = 1

core 2,
OUTPUT:
Number of Threads specified by user: 2
Sequential part: Hello from thread 0
Sequential part: Hello from thread 0
Sequential part: Hello from thread 0
Sequential part: Hello from thread 0
Parallel part: Hello from thread 1
Parallel part: Hello from thread 0
Number of Threads requested = 2
Number of Threads counted = 2

core 4,
OUTPUT:
Number of Threads specified by user: 4
Sequential part: Hello from thread 0
Sequential part: Hello from thread 0
Sequential part: Hello from thread 0
Sequential part: Hello from thread 0
Parallel part: Hello from thread 3
Parallel part: Hello from thread 2
Parallel part: Hello from thread 1
Parallel part: Hello from thread 0
Number of Threads requested = 4
Number of Threads counted = 4

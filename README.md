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

info:
The recent ZSim[23] simulator takes another fine-grained
approach to parallelize the core of the simulator. ZSim simulates
applications in two phases, a bound and a weave phase, the
phases are interleaved and only work on a small number of
instructions at a time. The bound phase executes first and
provides a lower bound on the latency for the simulated block
of instructions. Simulated threads can be executed in parallel
since no interactions are simulated in this phase. The simulator
then executes the weave phase that uses the traces from the
bound phase to simulate memory system interactions. This can
also be done in parallel since the memory system is divided into
domains with a small amount of communication that requires
synchronization. Since ZSim is Pin-based, ZSim only supports
user-space x86 code and does not simulate any devices (e.g.,
storage and network). The main focus of ZSim is simulating
large parallel systems.
Methods such as PDES or ZSim are all orthogonal to our
pFSA method since they work at a completely different level in
the simulator. For examples, a simulator using PDES techniques
to simulate in parallel could be combined with pFSA to expose
even more parallelism than can be exposed by PDES alone.

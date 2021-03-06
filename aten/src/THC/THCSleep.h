#ifndef THC_SPIN_INC
#define THC_SPIN_INC

#include <THC/THCGeneral.h>
#include <time.h>

// enqueues a kernel that spins for the specified number of cycles
TORCH_CUDA_API void THC_sleep(THCState* state, int64_t cycles);

#endif

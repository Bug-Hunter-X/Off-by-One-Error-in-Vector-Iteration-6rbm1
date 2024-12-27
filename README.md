# Off-by-One Error in C++ Vector Iteration

This repository demonstrates a common off-by-one error in C++ when iterating over a `std::vector`. The error occurs because the loop condition `i <= v.size()` attempts to access an element beyond the valid index range of the vector.
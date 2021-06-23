#include "hello.h"


int main(int argc, char ** argv){
    if (argc!=2){
        printf("Error: the number of arguments must be 1\n");
    }
    int n = atoi(argv[1]);
    printf("Generate a random matrix of size %d by %d\n", n, n);
    auto M = get_random_matrix(n);
    std::cout << M << std::endl;
    return 1;
}
#include "hello.h"

MatrixXd get_random_matrix(int n){
    return MatrixXd::Random(n, n);
}

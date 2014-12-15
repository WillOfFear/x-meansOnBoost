#include <boost/numeric/ublas/io.hpp>
#include <boost/numeric/ublas/operation.hpp>
#include "xmeans.h"

using namespace boost::numeric::ublas;
using namespace std;

int main(int argc, char **argv) {
	doublematrix A(3, 2);
	A(0, 0) = 0; A(0, 1) = 1;
	A(1, 0) = 3; A(1, 1) = 4;
	A(0, 0) = 1; A(0, 1) = 2;
		
	doublematrix B(2, 2);
	B(0, 0) = 1; B(0, 1) = 2;
	B(1, 0) = 1; B(1, 1) = 4;
		
	auto C = subrange(A, 0, A.size2(), 0, A.size2());
	
	cout << A << endl
	     << C << endl;
    return 0;
}

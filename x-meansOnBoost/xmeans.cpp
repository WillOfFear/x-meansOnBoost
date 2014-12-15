#include "xmeans.h"
#include <boost/numeric/ublas/io.hpp>
#include <boost/numeric/ublas/operation.hpp>

using namespace boost::numeric::ublas;
using namespace std;

doublematrix txInvVxX(const doublematrix &x, const doublematrix &invVx) {
	doublematrix a = prod( trans(x), invVx);
	return prod( a, x);
}


ResultOflnL lnL(const doublematrix &x, const doublevector &centers, bool ignoreCovariance ){
	assert(!centers.empty());
	if (x.size1() <= 2){
		return ResultOflnL{-1, doublevector()};
	}
	auto vx = subrange(x, 0, x.size2(), 0, x.size2());
	doublematrix invVx;
	doublevector detVx;
	if(x.size2() == 1){
		invVx = doublematrix(1, 1, 1 / vx(0, 0)); // На самом деле invVx вектор.
//		detVx = vx; // На самом деле invVx вектор.
	} else {
		if(ignoreCovariance){
//			invVx = diagonal_matrix(vx);
		} else {
			
		}
	}
}